<Style name="cycleway-casing-bridge">
    <Rule><!-- Cycleway Casing-->
      &maxscale_zoom16;
      &minscale_zoom18;
      <Filter>[highway] = 'cycleway'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">#000</CssParameter>
        <CssParameter name="stroke-width">12</CssParameter>
      </LineSymbolizer>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_land;</CssParameter>
        <CssParameter name="stroke-width">10</CssParameter>
      </LineSymbolizer>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_cyclewayCasing;</CssParameter>
        <CssParameter name="stroke-width">6</CssParameter>
      </LineSymbolizer>
    </Rule>
</Style>
<Style name="cycleway-bridge">
    <Rule><!-- Cycleway -->
      &maxscale_zoom16;
      &minscale_zoom18;
      <Filter>[highway] = 'cycleway'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_cycleway;</CssParameter>
        <CssParameter name="stroke-width">4</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
</Style>

<Layer name="cycleway-casing-bridge" status="on" srs="&osm2pgsql_projection;">
    <StyleName>cycleway-casing-bridge</StyleName>
    <Datasource>
      <Parameter name="table">
      (select way,highway
       from &prefix;_line
       where (highway = 'cycleway' OR highway = 'path')
       and bridge in ('yes','true','1')
       order by z_order
      ) as roads
      </Parameter>
      &datasource-settings;
    </Datasource>
</Layer>

<Layer name="cycleway-bridge" status="on" srs="&osm2pgsql_projection;">
	<StyleName>cycleway-bridge</StyleName>
	<Datasource>
		<Parameter name="table">
      (select way,highway
       from &prefix;_line
       where (highway = 'cycleway' or (highway = 'path' and bicycle='yes')) and bridge in ('yes','true','1')
       order by z_order
      ) as roads
		</Parameter>
		&datasource-settings;
	</Datasource>
</Layer>


