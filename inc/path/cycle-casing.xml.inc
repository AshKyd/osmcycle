<Style name="cycleways-casing">
    
	<!-- 12 -->
    <Rule><!-- Cycleway Casing-->
      &maxscale_zoom12;
      &minscale_zoom12;
      <Filter>[highway] = 'cycleway' or [highway] = 'path'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_land;</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    
	<!-- 13 -->
    <Rule><!-- Cycleway Casing-->
      &maxscale_zoom13;
      &minscale_zoom13;
      <Filter>[highway] = 'cycleway' or [highway] = 'path'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_land;</CssParameter>
        <CssParameter name="stroke-width">4</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    
    <!-- Standard Casing -->
		<!-- 14 -->
		<Rule><!-- Cycleway Casing-->
		  &maxscale_zoom14;
		  &minscale_zoom14;
		  <Filter>[highway] = 'cycleway' or [highway] = 'path'</Filter>
		   <LineSymbolizer>
			<CssParameter name="stroke">&color_land;</CssParameter>
			<CssParameter name="stroke-width">4.5</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		  </LineSymbolizer>
		   <LineSymbolizer>
			<CssParameter name="stroke">&color_cyclewayCasing;</CssParameter>
			<CssParameter name="stroke-width">3</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		  </LineSymbolizer>
		</Rule>
		
		<!-- 15 -->
		<Rule><!-- Cycleway Casing-->
		  &maxscale_zoom15;
		  &minscale_zoom15;
		  <Filter>[highway] = 'cycleway' or [highway] = 'path'</Filter>
		   <LineSymbolizer>
			<CssParameter name="stroke">&color_cyclewayCasing;</CssParameter>
			<CssParameter name="stroke-width">5</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		  </LineSymbolizer>
		</Rule>
		
		<!-- 16-18 -->
		<Rule><!-- Cycleway Casing-->
		  &maxscale_zoom16;
		  &minscale_zoom18;
		  <Filter>[highway] = 'cycleway' or [highway] = 'path'</Filter>
		   <LineSymbolizer>
			<CssParameter name="stroke">&color_cyclewayCasing;</CssParameter>
			<CssParameter name="stroke-width">6</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		  </LineSymbolizer>
		</Rule>
	
</Style>

<Layer name="cycleways-casing" status="on" srs="&osm2pgsql_projection;">
	<StyleName>cycleways-casing</StyleName>
	<Datasource>
		<Parameter name="table">
      (select way,highway
       from &prefix;_line
       where highway = 'cycleway'
       OR ( highway = 'path' and bicycle is not null and bicycle in ('yes','designated'))
       OR ( highway = 'track' and bicycle is not null and bicycle in ('yes','designated'))
       order by z_order
      ) as roads
		</Parameter>
		&datasource-settings;
	</Datasource>
</Layer>


