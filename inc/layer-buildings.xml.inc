<Style name="buildings">
    <Rule>
      <Filter>[building] != 'INT-light' and [building] != ''</Filter>
      &maxscale_zoom12;
      <PolygonSymbolizer>
         <CssParameter name="fill">&color_buildingFill;</CssParameter>
         <CssParameter name="fill-opacity">0.9</CssParameter>
      </PolygonSymbolizer>
    </Rule>
</Style>

<Layer name="buildings" status="on" srs="&osm2pgsql_projection;">
    <StyleName>buildings</StyleName>
    <Datasource>
      <Parameter name="table">
      (select way,aeroway,building
       from &prefix;_polygon
       where (building is not null
         and building not in ('no','station','supermarket')
         and (railway is null or railway != 'station')
         and (amenity is null or amenity != 'place_of_worship'))
          or aeroway = 'terminal'
       order by z_order,way_area desc) as buildings
      </Parameter>
      &datasource-settings;
    </Datasource>
</Layer>
