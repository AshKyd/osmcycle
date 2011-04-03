<Style name="footways">
		
	<!-- Track -->
		<!-- 14 -->
		<Rule><!-- Cycleway -->
		  &maxscale_zoom15;
		  &minscale_zoom15;
		   <LineSymbolizer>
			<CssParameter name="stroke">&color_footway;</CssParameter>
			<CssParameter name="stroke-width">.5</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
			<CssParameter name="stroke-dasharray">2,4</CssParameter>
		  </LineSymbolizer>
		</Rule>
		
		<!-- 16-18 -->
		<Rule><!-- Cycleway -->
		  &maxscale_zoom16;
		  &minscale_zoom18;
		   <LineSymbolizer>
			<CssParameter name="stroke">&color_footwayCasing;</CssParameter>
			<CssParameter name="stroke-width">2</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
		  </LineSymbolizer>
		   <LineSymbolizer>
			<CssParameter name="stroke">&color_footway;</CssParameter>
			<CssParameter name="stroke-width">1</CssParameter>
			<CssParameter name="stroke-linecap">round</CssParameter>
			<CssParameter name="stroke-dasharray">1,3</CssParameter>
		  </LineSymbolizer>
		</Rule>
</Style>

<Layer name="footways" status="on" srs="&osm2pgsql_projection;">
	<StyleName>footways</StyleName>
	<Datasource>
		<Parameter name="table">
      (select way,highway
       from &prefix;_line
       where highway = 'footway'
       OR ( highway = 'path' and (bicycle is null or bicycle = 'no') and foot in ('yes','designated'))
       order by z_order
      ) as roads
		</Parameter>
		&datasource-settings;
	</Datasource>
</Layer>


