<Style name="transport-pub">
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

<Layer name="transport-pub" status="on" srs="&osm2pgsql_projection;">
    <!--StyleName>roads-casing</StyleName-->
    <StyleName>transport-pub</StyleName>
    <Datasource>
      <Parameter name="table">
      (select way,railway
       from &prefix;_roads
        where railway is not null
        and service is null
        and (bridge in ('no','false','0') or bridge is null)
       order by z_order
      ) as roads
      </Parameter>
      &datasource-settings;
    </Datasource>
</Layer>
