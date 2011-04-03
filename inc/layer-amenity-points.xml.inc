<Style name="points">
    <Rule>
      &maxscale_zoom15;
      <Filter>[amenity]='bicycle_rental' and [network] &lt;&gt; 'Brisbane CityCycle'</Filter>
      <PointSymbolizer file="&symbols;/rental_bicycle.p.20.png" />
    </Rule>
    <Rule>
      &maxscale_zoom15;
      <Filter>[amenity]='bicycle_rental' and [network]='Brisbane CityCycle'</Filter>
      <PointSymbolizer file="&symbols;/citycycle.png" />
    </Rule>
    <Rule>
      &maxscale_zoom15;
      <Filter>[amenity]='bicycle_parking'</Filter>
      <PointSymbolizer file="&symbols;/bicycle-parking.png" allow_overlap="false"/>
    </Rule>
    <Rule>
      &maxscale_zoom16;
      <Filter>[amenity]='toilets'</Filter>
      <PointSymbolizer file="&symbols;/toilets.png" />
    </Rule>
    <Rule>
      &maxscale_zoom16; 
      <Filter>[amenity]='drinking_water'</Filter> 
      <PointSymbolizer file="&symbols;/drinking-water.png" /> 
    </Rule>
    <Rule>
      &maxscale_zoom16;
      <Filter>[tourism]='viewpoint'</Filter>
      <PointSymbolizer file="&symbols;/view_point.p.16.png" />
    </Rule>
    <Rule>
      &maxscale_zoom16;
      <Filter>[shop]='bicycle'</Filter>
      <PointSymbolizer file="&symbols;/shopping_bicycle.p.16.png" />
    </Rule>
</Style>

<Style name="symbols">
    <Rule>
      &maxscale_zoom11;
      <Filter>[natural]='peak'</Filter>
      <PointSymbolizer file="&symbols;/peak.png" />
    </Rule>
    <Rule>
      &maxscale_zoom14;
      <Filter>[natural]='spring'</Filter>
      <PointSymbolizer file="&symbols;/spring.png" />
    </Rule>
    <Rule>
      &maxscale_zoom15;
      <Filter>[highway]='gate' or [barrier]='gate'</Filter>
      <PointSymbolizer file="&symbols;/gate2.png" allow_overlap="false"/>
    </Rule>
</Style>

<Layer name="amenity-symbols" status="on" srs="&osm2pgsql_projection;">
    <StyleName>symbols</StyleName>
    <Datasource>
      <Parameter name="table">
      (select *
      from &prefix;_point
      where barrier in ('bollard','gate','lift_gate','block')
         or highway in ('mini_roundabout','gate')
         or "natural" in ('peak','volcano','spring','tree','cave_entrance')
         or railway='level_crossing'
      ) as symbols</Parameter>
      &datasource-settings;
    </Datasource>
</Layer>

<Layer name="amenity-points" status="on" srs="&osm2pgsql_projection;">
    <StyleName>points</StyleName>
    <Datasource>
      <Parameter name="table">
      (select way,amenity,shop,tourism,highway,man_made,access,religion,waterway,lock,historic,leisure,operator,network
      from &prefix;_point
      where amenity is not null
         or shop is not null
         or tourism in ('alpine_hut','camp_site','caravan_site','guest_house','hostel','hotel','motel','museum','viewpoint','bed_and_breakfast','information')
      ) as points</Parameter>
      &datasource-settings;
    </Datasource>
</Layer>
