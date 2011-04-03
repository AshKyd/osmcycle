<Style name="cycleways">
	<!-- 10-11 -->
    <Rule><!-- Cycleway -->
      &maxscale_zoom9;
      &minscale_zoom11;
      <Filter>[highway] = 'cycleway' or [highway] = 'path' or [highway] = 'track'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_cyclewayCasing;</CssParameter>
        <CssParameter name="stroke-width">.75</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    
	<!-- 12 -->
    <Rule><!-- Cycleway -->
      &maxscale_zoom12;
      &minscale_zoom12;
      <Filter>[highway] = 'cycleway' or [highway] = 'path' or [highway] = 'track'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_cyclewayCasing;</CssParameter>
        <CssParameter name="stroke-width">1</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    
	<!-- 13 -->
    <Rule><!-- Cycleway -->
      &maxscale_zoom13;
      &minscale_zoom13;
      <Filter>[highway] = 'cycleway' or [highway] = 'path' or [highway] = 'track'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_cyclewayCasing;</CssParameter>
        <CssParameter name="stroke-width">1.5</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    
    <!-- Standard Cycleway -->
		<!-- 14 -->
		<Rule><!-- Cycleway -->
		  &maxscale_zoom14;
		  &minscale_zoom14;
		  <Filter>[highway] = 'cycleway' or [highway] = 'path'</Filter>
		   <LineSymbolizer>
			<CssParameter name="stroke">&color_cycleway;</CssParameter>
			<CssParameter name="stroke-width">2</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		  </LineSymbolizer>
		</Rule>
		
		<!-- 15 -->
		<Rule><!-- Cycleway -->
		  &maxscale_zoom15;
		  &minscale_zoom15;
		  <Filter>[highway] = 'cycleway' or [highway] = 'path'</Filter>
		   <LineSymbolizer>
			<CssParameter name="stroke">&color_cycleway;</CssParameter>
			<CssParameter name="stroke-width">4</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		  </LineSymbolizer>
		</Rule>
		
		<!-- 16-18 -->
		<Rule><!-- Cycleway -->
		  &maxscale_zoom16;
		  &minscale_zoom18;
		  <Filter>[highway] = 'cycleway' or [highway] = 'path'</Filter>
		   <LineSymbolizer>
			<CssParameter name="stroke">&color_cycleway;</CssParameter>
			<CssParameter name="stroke-width">5</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		  </LineSymbolizer>
		</Rule>
		
	<!-- Track -->
		<!-- 14 -->
		<Rule><!-- Cycleway -->
		  &maxscale_zoom14;
		  &minscale_zoom14;
		  <Filter>[highway] = 'track'</Filter>
		   <LineSymbolizer>
			<CssParameter name="stroke">&color_track;</CssParameter>
			<CssParameter name="stroke-width">2</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		  </LineSymbolizer>
		   <LineSymbolizer>
			<CssParameter name="stroke">&color_trackCasing;</CssParameter>
			<CssParameter name="stroke-width">2</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
			<CssParameter name="stroke-dasharray">1,8</CssParameter>
		  </LineSymbolizer>
		</Rule>
		
		<!-- 15 -->
		<Rule><!-- Cycleway -->
		  &maxscale_zoom15;
		  &minscale_zoom15;
		  <Filter>[highway] = 'track'</Filter>
		   <LineSymbolizer>
			<CssParameter name="stroke">&color_track;</CssParameter>
			<CssParameter name="stroke-width">4</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		  </LineSymbolizer>
		   <LineSymbolizer>
			<CssParameter name="stroke">&color_trackCasing;</CssParameter>
			<CssParameter name="stroke-width">4</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
			<CssParameter name="stroke-dasharray">1,8</CssParameter>
		  </LineSymbolizer>
		</Rule>
		
		<!-- 16-18 -->
		<Rule><!-- Cycleway -->
		  &maxscale_zoom16;
		  &minscale_zoom18;
		  <Filter>[highway] = 'track'</Filter>
		   <LineSymbolizer>
			<CssParameter name="stroke">&color_track;</CssParameter>
			<CssParameter name="stroke-width">5</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		  </LineSymbolizer>
		   <LineSymbolizer>
			<CssParameter name="stroke">&color_trackCasing;</CssParameter>
			<CssParameter name="stroke-width">5</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
			<CssParameter name="stroke-dasharray">1,8</CssParameter>
		  </LineSymbolizer>
		</Rule>
</Style>

<Layer name="cycleways" status="on" srs="&osm2pgsql_projection;">
	<StyleName>cycleways</StyleName>
	<Datasource>
		<Parameter name="table">
      (select way,highway
       from &prefix;_line
       where highway = 'cycleway'
       OR ( highway = 'path' and bicycle is not null and bicycle = 'yes')
       OR ( highway = 'track' and bicycle is not null and bicycle = 'yes')
       order by z_order
      ) as roads
		</Parameter>
		&datasource-settings;
	</Datasource>
</Layer>


