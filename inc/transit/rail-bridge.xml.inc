<Style name="transport-pub-bridge">
    <Rule>
      &maxscale_zoom9;
      &minscale_zoom13;
      <Filter>[railway] = 'rail'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_land;</CssParameter>
        <CssParameter name="stroke-width">4</CssParameter>
      </LineSymbolizer>
       <LineSymbolizer>
        <CssParameter name="stroke">#ccc</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
        <CssParameter name="stroke-dasharray">1,4</CssParameter>
      </LineSymbolizer>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_placeLight;</CssParameter>
        <CssParameter name="stroke-width">.5</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom14;
      &minscale_zoom18;
      <Filter>[railway] = 'rail'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_land;</CssParameter>
        <CssParameter name="stroke-width">10</CssParameter>
      </LineSymbolizer>
       <LineSymbolizer>
        <CssParameter name="stroke">#ccc</CssParameter>
        <CssParameter name="stroke-width">8</CssParameter>
        <CssParameter name="stroke-dasharray">2,8</CssParameter>
      </LineSymbolizer>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_placeLight;</CssParameter>
        <CssParameter name="stroke-width">4</CssParameter>
      </LineSymbolizer>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_land;</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
      </LineSymbolizer>
       <LineSymbolizer>
        <CssParameter name="stroke">#ccc</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
        <CssParameter name="stroke-dasharray">2,8</CssParameter>
      </LineSymbolizer>
    </Rule>
</Style>

<Layer name="transport-pub-bridge" status="on" srs="&osm2pgsql_projection;">
    <StyleName>transport-pub-bridge</StyleName>
    <Datasource>
      <Parameter name="table">
      (select way,RAILWAY from &prefix;_line where railway is not null and bridge in ('yes','true','1') and service is null) as roads
      </Parameter>
      &datasource-settings;
    </Datasource>
</Layer>

&layer-amenity-stations;
