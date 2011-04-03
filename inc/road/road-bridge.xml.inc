<Style name="road-casing-bridge">
	<!-- 11-12 -->
    <Rule><!-- Primary Roads-->
      &maxscale_zoom11;
      &minscale_zoom12;
      <Filter>[highway] = 'motorway'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_highwayPrimaryCasing;</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
        <CssParameter name="stroke-linecap">butt</CssParameter>
      </LineSymbolizer>
    </Rule>
	
	<!-- 13 -->
    <Rule><!-- Primary Roads-->
      &maxscale_zoom13;
      &minscale_zoom13;
      <Filter>[highway] = 'motorway'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_highwayPrimaryCasing;</CssParameter>
        <CssParameter name="stroke-width">5</CssParameter>
        <CssParameter name="stroke-linecap">butt</CssParameter>
      </LineSymbolizer>
    </Rule>

	<!-- 14 -->
    <Rule><!-- Primary Casing-->
      &maxscale_zoom14;
      &minscale_zoom14;
      <Filter>[highway] = 'primary'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_highwayPrimaryCasing;</CssParameter>
        <CssParameter name="stroke-width">6</CssParameter>
        <CssParameter name="stroke-linecap">butt</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule><!-- Highway Casing-->
      &maxscale_zoom14;
      &minscale_zoom14;
      <Filter>[highway] = 'motorway'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_highwayMotorwayCasing;</CssParameter>
        <CssParameter name="stroke-width">12</CssParameter>
        <CssParameter name="stroke-linecap">butt</CssParameter>
      </LineSymbolizer>
    </Rule>

	<!-- 15 -->
    <Rule><!-- Residential Casing-->
      &maxscale_zoom15;
      &minscale_zoom15;
      <Filter>[highway] = 'residential' or [highway] = 'unclassified'  or [highway] = 'road'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_highwayResidentialCasing;</CssParameter>
        <CssParameter name="stroke-width">6</CssParameter>
        <CssParameter name="stroke-linecap">butt</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule><!-- Secondary Casing-->
      &maxscale_zoom15;
      &minscale_zoom15;
      <Filter>[highway] = 'secondary' or [highway] = 'tertiary' or [highway] = 'secondary_link' or [highway] = 'tertiary_link' or [highway] = 'motorway_link' or [highway] = 'primary_link'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_highwayPrimaryCasing;</CssParameter>
        <CssParameter name="stroke-width">5</CssParameter>
        <CssParameter name="stroke-linecap">butt</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule><!-- Primary Casing-->
      &maxscale_zoom15;
      &minscale_zoom15;
      <Filter>[highway] = 'primary'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_highwayPrimaryCasing;</CssParameter>
        <CssParameter name="stroke-width">10</CssParameter>
        <CssParameter name="stroke-linecap">butt</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule><!-- Highway Casing-->
      &maxscale_zoom15;
      &minscale_zoom15;
      <Filter>[highway] = 'motorway'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_highwayMotorwayCasing;</CssParameter>
        <CssParameter name="stroke-width">16</CssParameter>
        <CssParameter name="stroke-linecap">butt</CssParameter>
      </LineSymbolizer>
    </Rule>
    
    
    
    <Rule><!-- Residential Casing-->
      &maxscale_zoom16;
      &minscale_zoom18;
      <Filter>[highway] = 'residential'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_land;</CssParameter>
        <CssParameter name="stroke-width">14</CssParameter>
      </LineSymbolizer>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_highwayResidentialCasing;</CssParameter>
        <CssParameter name="stroke-width">10</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule><!-- Secondary Casing-->
      &maxscale_zoom16;
      &minscale_zoom18;
      <Filter>[highway] = 'secondary' or [highway] = 'tertiary' or [highway] = 'secondary_link' or [highway] = 'tertiary_link' or [highway] = 'primary_link' or [highway] = 'motorway_link'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_land;</CssParameter>
        <CssParameter name="stroke-width">14</CssParameter>
      </LineSymbolizer>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_highwayPrimaryCasing;</CssParameter>
        <CssParameter name="stroke-width">10</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule><!-- Primary Casing-->
      &maxscale_zoom16;
      &minscale_zoom18;
      <Filter>[highway] = 'primary'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_land;</CssParameter>
        <CssParameter name="stroke-width">18</CssParameter>
      </LineSymbolizer>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_highwayPrimaryCasing;</CssParameter>
        <CssParameter name="stroke-width">14</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule><!-- Highway Casing-->
      &maxscale_zoom16;
      &minscale_zoom18;
      <Filter>[highway] = 'motorway'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_land;</CssParameter>
        <CssParameter name="stroke-width">26</CssParameter>
      </LineSymbolizer>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_highwayMotorwayCasing;</CssParameter>
        <CssParameter name="stroke-width">20</CssParameter>
      </LineSymbolizer>
    </Rule>
</Style>
<Style name="road-bridge">
	
	<!-- 10-12 -->
    <Rule><!-- Primary Roads-->
      &maxscale_zoom10;
      &minscale_zoom12;
      <Filter>[highway] = 'motorway'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_highwayMotorway;</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
	
	<!-- 13 -->
    <Rule><!-- Primary Roads-->
      &maxscale_zoom13;
      &minscale_zoom13;
      <Filter>[highway] = 'motorway'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_highwayMotorway;</CssParameter>
        <CssParameter name="stroke-width">4</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
	
	<!-- 14 -->
    <Rule><!-- Motorway links-->
      &maxscale_zoom14;
      &minscale_zoom14;
      <Filter>[highway] = 'motorway_link' </Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_highwayMotorway;</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule><!-- Primary Roads-->
      &maxscale_zoom14;
      &minscale_zoom14;
      <Filter>[highway] = 'motorway'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_highwayMotorway;</CssParameter>
        <CssParameter name="stroke-width">10</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
	
	<!-- 15 -->
    <Rule><!-- Motorway links-->
      &maxscale_zoom15;
      &minscale_zoom15;
      <Filter>[highway] = 'motorway_link' </Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_highwayMotorway;</CssParameter>
        <CssParameter name="stroke-width">4</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule><!-- Primary Roads-->
      &maxscale_zoom15;
      &minscale_zoom15;
      <Filter>[highway] = 'motorway'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_highwayMotorway;</CssParameter>
        <CssParameter name="stroke-width">14</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
	<!-- 10-11 -->
	<Rule><!-- Secondary Roads-->
      &maxscale_zoom10;
      &minscale_zoom11;
      <Filter>[highway] = 'secondary' or [highway] = 'tertiary' or [highway] = 'secondary_link' or [highway] = 'tertiary_link' or or [highway] = 'primary_link'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_highwayPrimary;</CssParameter>
        <CssParameter name="stroke-width">1</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule><!-- Primary Roads-->
      &maxscale_zoom10;
      &minscale_zoom11;
      <Filter>[highway] = 'primary'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_highwayPrimary;</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    
	<!-- 12-13 -->
    <Rule><!-- Residential Roads-->
      &maxscale_zoom12;
      &minscale_zoom13;
      <Filter>[highway] = 'residential' or [highway] = 'unclassified'  or [highway] = 'road'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_highwayResidential;</CssParameter>
        <CssParameter name="stroke-width">1</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule><!-- Secondary Roads-->
      &maxscale_zoom12;
      &minscale_zoom13;
      <Filter>[highway] = 'secondary' or [highway] = 'tertiary' or [highway] = 'secondary_link' or [highway] = 'tertiary_link' or or [highway] = 'primary_link'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_highwayPrimary;</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule><!-- Primary Roads-->
      &maxscale_zoom12;
      &minscale_zoom13;
      <Filter>[highway] = 'primary'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_highwayPrimary;</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    
	<!-- 14 -->
    <Rule><!-- Residential Roads-->
      &maxscale_zoom14;
      &minscale_zoom14;
      <Filter>[highway] = 'residential' or [highway] = 'unclassified'  or [highway] = 'road'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_highwayResidential;</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule><!-- Secondary Roads-->
      &maxscale_zoom14;
      &minscale_zoom14;
      <Filter>[highway] = 'secondary' or [highway] = 'tertiary' or [highway] = 'secondary_link' or [highway] = 'tertiary_link' or or [highway] = 'primary_link'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_highwayPrimary;</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule><!-- Primary Roads-->
      &maxscale_zoom14;
      &minscale_zoom14;
      <Filter>[highway] = 'primary'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_highwayPrimary;</CssParameter>
        <CssParameter name="stroke-width">6</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    
	<!-- 15 -->
    <Rule><!-- Residential Roads-->
      &maxscale_zoom15;
      &minscale_zoom15;
      <Filter>[highway] = 'residential' or [highway] = 'unclassified'  or [highway] = 'road'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_highwayResidential;</CssParameter>
        <CssParameter name="stroke-width">4</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule><!-- Secondary Roads-->
      &maxscale_zoom15;
      &minscale_zoom15;
      <Filter>[highway] = 'secondary' or [highway] = 'tertiary' or [highway] = 'secondary_link' or [highway] = 'tertiary_link' or or [highway] = 'primary_link'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_highwayPrimary;</CssParameter>
        <CssParameter name="stroke-width">4</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule><!-- Primary Roads-->
      &maxscale_zoom15;
      &minscale_zoom15;
      <Filter>[highway] = 'primary'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_highwayPrimary;</CssParameter>
        <CssParameter name="stroke-width">8</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    
    
    
    


	<!-- 16-18 -->
    <Rule><!-- Primary Roads-->
      &maxscale_zoom16;
      &minscale_zoom18;
      <Filter>[highway] = 'motorway'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_highwayMotorway;</CssParameter>
        <CssParameter name="stroke-width">18</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule><!-- Residential Roads-->
      &maxscale_zoom16;
      &minscale_zoom18;
      <Filter>[highway] = 'residential'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_highwayResidential;</CssParameter>
        <CssParameter name="stroke-width">8</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule><!-- Secondary Roads-->
      &maxscale_zoom16;
      &minscale_zoom18;
      <Filter>[highway] = 'secondary' or [highway] = 'tertiary' or [highway] = 'secondary_link' or [highway] = 'tertiary_link' or [highway] = 'primary_link'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_highwayPrimary;</CssParameter>
        <CssParameter name="stroke-width">8</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule><!-- Primary Roads-->
      &maxscale_zoom16;
      &minscale_zoom18;
      <Filter>[highway] = 'primary'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_highwayPrimary;</CssParameter>
        <CssParameter name="stroke-width">12</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule><!-- Motorway links-->
      &maxscale_zoom16;
      &minscale_zoom18;
      <Filter>[highway] = 'motorway_link' </Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_highwayMotorway;</CssParameter>
        <CssParameter name="stroke-width">8</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
</Style>
<Style name="road-bridge-nocycle">
	
	<!-- 10-12 -->
    <Rule><!-- Primary Roads-->
      &maxscale_zoom10;
      &minscale_zoom12;
      <Filter>[highway] = 'motorway'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_highwayMotorway;</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
	
	<!-- 13 -->
    <Rule><!-- Primary Roads-->
      &maxscale_zoom13;
      &minscale_zoom13;
      <Filter>[highway] = 'motorway'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_highwayMotorway;</CssParameter>
        <CssParameter name="stroke-width">4</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
	
	<!-- 14 -->
    <Rule><!-- Motorway links-->
      &maxscale_zoom14;
      &minscale_zoom14;
      <Filter>[highway] = 'motorway_link' </Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_highwayMotorway;</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule><!-- Primary Roads-->
      &maxscale_zoom14;
      &minscale_zoom14;
      <Filter>[highway] = 'motorway'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_highwayMotorway;</CssParameter>
        <CssParameter name="stroke-width">10</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
	
	<!-- 15 -->
    <Rule><!-- Motorway links-->
      &maxscale_zoom15;
      &minscale_zoom15;
      <Filter>[highway] = 'motorway_link' </Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_highwayMotorway;</CssParameter>
        <CssParameter name="stroke-width">4</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule><!-- Primary Roads-->
      &maxscale_zoom15;
      &minscale_zoom15;
      <Filter>[highway] = 'motorway'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_highwayMotorway;</CssParameter>
        <CssParameter name="stroke-width">14</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
	<!-- 10-11 -->
	<Rule><!-- Secondary Roads-->
      &maxscale_zoom10;
      &minscale_zoom11;
      <Filter>[highway] = 'secondary' or [highway] = 'tertiary' or [highway] = 'secondary_link' or [highway] = 'tertiary_link' or or [highway] = 'primary_link'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_highwayMotorway;</CssParameter>
        <CssParameter name="stroke-width">1</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule><!-- Primary Roads-->
      &maxscale_zoom10;
      &minscale_zoom11;
      <Filter>[highway] = 'primary'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_highwayMotorway;</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    
	<!-- 12-13 -->
    <Rule><!-- Residential Roads-->
      &maxscale_zoom12;
      &minscale_zoom13;
      <Filter>[highway] = 'residential' or [highway] = 'unclassified'  or [highway] = 'road'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_highwayMotorway;</CssParameter>
        <CssParameter name="stroke-width">1</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule><!-- Secondary Roads-->
      &maxscale_zoom12;
      &minscale_zoom13;
      <Filter>[highway] = 'secondary' or [highway] = 'tertiary' or [highway] = 'secondary_link' or [highway] = 'tertiary_link' or or [highway] = 'primary_link'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_highwayMotorway;</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule><!-- Primary Roads-->
      &maxscale_zoom12;
      &minscale_zoom13;
      <Filter>[highway] = 'primary'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_highwayMotorway;</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    
	<!-- 14 -->
    <Rule><!-- Residential Roads-->
      &maxscale_zoom14;
      &minscale_zoom14;
      <Filter>[highway] = 'residential' or [highway] = 'unclassified'  or [highway] = 'road'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_highwayMotorway;</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule><!-- Secondary Roads-->
      &maxscale_zoom14;
      &minscale_zoom14;
      <Filter>[highway] = 'secondary' or [highway] = 'tertiary' or [highway] = 'secondary_link' or [highway] = 'tertiary_link' or or [highway] = 'primary_link'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_highwayMotorway;</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule><!-- Primary Roads-->
      &maxscale_zoom14;
      &minscale_zoom14;
      <Filter>[highway] = 'primary'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_highwayMotorway;</CssParameter>
        <CssParameter name="stroke-width">6</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    
	<!-- 15 -->
    <Rule><!-- Residential Roads-->
      &maxscale_zoom15;
      &minscale_zoom15;
      <Filter>[highway] = 'residential' or [highway] = 'unclassified'  or [highway] = 'road'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_highwayMotorway;</CssParameter>
        <CssParameter name="stroke-width">4</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule><!-- Secondary Roads-->
      &maxscale_zoom15;
      &minscale_zoom15;
      <Filter>[highway] = 'secondary' or [highway] = 'tertiary' or [highway] = 'secondary_link' or [highway] = 'tertiary_link' or or [highway] = 'primary_link'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_highwayMotorway;</CssParameter>
        <CssParameter name="stroke-width">4</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule><!-- Primary Roads-->
      &maxscale_zoom15;
      &minscale_zoom15;
      <Filter>[highway] = 'primary'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_highwayMotorway;</CssParameter>
        <CssParameter name="stroke-width">8</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    
    
    
    


	<!-- 16-18 -->
    <Rule><!-- Primary Roads-->
      &maxscale_zoom16;
      &minscale_zoom18;
      <Filter>[highway] = 'motorway'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_highwayMotorway;</CssParameter>
        <CssParameter name="stroke-width">18</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule><!-- Residential Roads-->
      &maxscale_zoom16;
      &minscale_zoom18;
      <Filter>[highway] = 'residential'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_highwayMotorway;</CssParameter>
        <CssParameter name="stroke-width">8</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule><!-- Secondary Roads-->
      &maxscale_zoom16;
      &minscale_zoom18;
      <Filter>[highway] = 'secondary' or [highway] = 'tertiary' or [highway] = 'secondary_link' or [highway] = 'tertiary_link' or [highway] = 'primary_link'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_highwayMotorway;</CssParameter>
        <CssParameter name="stroke-width">8</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule><!-- Primary Roads-->
      &maxscale_zoom16;
      &minscale_zoom18;
      <Filter>[highway] = 'primary'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_highwayMotorway;</CssParameter>
        <CssParameter name="stroke-width">12</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule><!-- Motorway links-->
      &maxscale_zoom16;
      &minscale_zoom18;
      <Filter>[highway] = 'motorway_link' </Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_highwayMotorway;</CssParameter>
        <CssParameter name="stroke-width">8</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
</Style>

<Layer name="road-casing-bridge" status="on" srs="&osm2pgsql_projection;">
    <StyleName>road-casing-bridge</StyleName>
    <Datasource>
      <Parameter name="table">
      (select way,highway
       from &prefix;_line
       where highway is not null and bridge in ('yes','true','1')
       and ( access is null or access = 'permissive' )
       order by z_order
      ) as roads
      </Parameter>
      &datasource-settings;
    </Datasource>
</Layer>

<Layer name="road-bridge" status="on" srs="&osm2pgsql_projection;">
    <StyleName>road-bridge</StyleName>
    <Datasource>
      <Parameter name="table">
      (select way,highway
       from &prefix;_line
       where highway is not null and bridge in ('yes','true','1')
       and ( access is null or access = 'permissive' )
       and (bicycle is null or bicycle != 'no')
       order by z_order
      ) as roads
      </Parameter>
      &datasource-settings;
    </Datasource>
</Layer>

<Layer name="road-bridge-nocycle" status="on" srs="&osm2pgsql_projection;">
    <StyleName>road-bridge-nocycle</StyleName>
    <Datasource>
      <Parameter name="table">
      (select way,highway
       from &prefix;_line
       where highway is not null and bridge in ('yes','true','1')
       and ( access is null or access = 'permissive' )
       and bicycle = 'no'
       order by z_order
      ) as roads
      </Parameter>
      &datasource-settings;
    </Datasource>
</Layer>
