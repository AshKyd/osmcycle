<Style name="leisure">
     <Rule>
      &maxscale_zoom9;
      <Filter>[leisure] != ''</Filter>
     <PolygonSymbolizer>
        <CssParameter name="fill">&color_leisureFill;</CssParameter>
     </PolygonSymbolizer>
    </Rule>
</Style>

<Style name="landuse">
	<Rule>
      &maxscale_zoom9;
		<Filter>[landuse] != ''</Filter>
		<PolygonSymbolizer>
			<CssParameter name="fill">&color_leisureFill;</CssParameter>
		</PolygonSymbolizer>
	</Rule>
	<Rule>
      &maxscale_zoom9;
		<Filter>[landuse] = 'forest'</Filter>
		<PolygonPatternSymbolizer file="&symbols;/forest.png" />
    </Rule>
</Style>

<Layer name="leisure" status="on" srs="&osm2pgsql_projection;">
    <StyleName>leisure</StyleName>
    <Datasource>
      <Parameter name="table">
      (select way,aeroway,amenity,landuse,leisure,man_made,military,"natural",power,tourism,name,highway,
       case when religion in ('christian','jewish') then religion else 'INT-generic'::text end as religion
       from &prefix;_polygon
       where landuse is not null
          or leisure is not null
          or aeroway in ('apron','aerodrome')
          or amenity in ('parking','university','college','school','hospital','kindergarten','grave_yard')
          or military in ('barracks','danger_area')
          or "natural" in ('field','beach','desert','heath','mud','wood','sand')
          or power in ('station','sub_station','generator')
          or tourism in ('attraction','camp_site','caravan_site','picnic_site','zoo')
          or highway in ('services','rest_area')
       order by z_order,way_area desc
      ) as leisure
      </Parameter>
      &datasource-settings;
    </Datasource>
</Layer>

<Layer name="landuse" status="on" srs="&osm2pgsql_projection;">
    <StyleName>landuse</StyleName>
    <Datasource>
      <Parameter name="table">
      (select way,landuse
       from &prefix;_polygon
       where landuse = 'recreation_ground'
       or landuse = 'forest'
       or landuse = 'plant_nursery'
       or landuse = 'village_green'
       or landuse = 'vineyard'
      ) as landuse
      </Parameter>
      &datasource-settings;
    </Datasource>
</Layer>
