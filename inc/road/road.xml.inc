<Style name="roads-casing">    
	<!-- 10-12 -->
    <Rule><!-- Primary Roads-->
      &maxscale_zoom10;
      &minscale_zoom12;
      <Filter>[highway] = 'motorway'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_highwayMotorwayCasing;</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    
	<!-- 13 -->
    <Rule><!-- Primary Roads-->
      &maxscale_zoom13;
      &minscale_zoom13;
      <Filter>[highway] = 'motorway'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_highwayMotorwayCasing;</CssParameter>
        <CssParameter name="stroke-width">5</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    
	<!-- 14 -->
    <Rule><!-- Motorway links-->
      &maxscale_zoom14;
      &minscale_zoom14;
      <Filter>[highway] = 'motorway_link' </Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_highwayMotorwayCasing;</CssParameter>
        <CssParameter name="stroke-width">4</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule><!-- Primary Roads-->
      &maxscale_zoom14;
      &minscale_zoom14;
      <Filter>[highway] = 'motorway'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_highwayMotorwayCasing;</CssParameter>
        <CssParameter name="stroke-width">12</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule><!-- Secondary Roads-->
      &maxscale_zoom14;
      &minscale_zoom14;
      <Filter>[highway] = 'secondary' or [highway] = 'tertiary' or [highway] = 'secondary_link' or [highway] = 'tertiary_link' or or [highway] = 'primary_link'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_highwayPrimaryCasing;</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule><!-- Primary Roads-->
      &maxscale_zoom14;
      &minscale_zoom14;
      <Filter>[highway] = 'primary' or [highway] = 'trunk'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_highwayPrimaryCasing;</CssParameter>
        <CssParameter name="stroke-width">6</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    
	<!-- 15 -->
    <Rule><!-- Motorway links-->
      &maxscale_zoom15;
      &minscale_zoom15;
      <Filter>[highway] = 'motorway_link' </Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_highwayMotorwayCasing;</CssParameter>
        <CssParameter name="stroke-width">5</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule><!-- Motorways -->
      &maxscale_zoom15;
      &minscale_zoom15;
      <Filter>[highway] = 'motorway'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_highwayMotorwayCasing;</CssParameter>
        <CssParameter name="stroke-width">16</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule><!-- Residential Roads-->
      &maxscale_zoom15;
      &minscale_zoom15;
      <Filter>[highway] = 'residential' or [highway] = 'unclassified'  or [highway] = 'road'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_highwayResidentialCasing;</CssParameter>
        <CssParameter name="stroke-width">4</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule><!-- Secondary Roads-->
      &maxscale_zoom15;
      &minscale_zoom15;
      <Filter>[highway] = 'secondary' or [highway] = 'tertiary' or [highway] = 'secondary_link' or [highway] = 'tertiary_link' or or [highway] = 'primary_link'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_highwayPrimaryCasing;</CssParameter>
        <CssParameter name="stroke-width">4</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule><!-- Primary Roads-->
      &maxscale_zoom15;
      &minscale_zoom15;
      <Filter>[highway] = 'primary' or [highway] = 'trunk'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_highwayPrimaryCasing;</CssParameter>
        <CssParameter name="stroke-width">8</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>

	<!-- 16-18 -->
    <Rule><!-- Service Casing-->
      &maxscale_zoom16;
      &minscale_zoom18;
      <Filter>[highway] = 'service'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_highwayResidentialCasing;</CssParameter>
        <CssParameter name="stroke-width">4</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule><!-- Residential Casing-->
      &maxscale_zoom16;
      &minscale_zoom18;
      <Filter>[highway] = 'residential' or [highway] = 'unclassified'  or [highway] = 'road'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_highwayResidentialCasing;</CssParameter>
        <CssParameter name="stroke-width">10</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule><!-- Secondary Casing-->
      &maxscale_zoom16;
      &minscale_zoom18;
      <Filter>[highway] = 'secondary' or [highway] = 'tertiary' or [highway] = 'secondary_link' or [highway] = 'tertiary_link' or [highway] = 'motorway_link' or [highway] = 'primary_link'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_highwayPrimaryCasing;</CssParameter>
        <CssParameter name="stroke-width">10</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule><!-- Primary Casing-->
      &maxscale_zoom16;
      &minscale_zoom18;
      <Filter>[highway] = 'primary' or [highway] = 'trunk'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_highwayPrimaryCasing;</CssParameter>
        <CssParameter name="stroke-width">14</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule><!-- Highway Casing-->
      &maxscale_zoom16;
      &minscale_zoom18;
      <Filter>[highway] = 'motorway'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_highwayMotorwayCasing;</CssParameter>
        <CssParameter name="stroke-width">20</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
</Style>

<Style name="cycle-lanes">

    <!-- Cycleway Lanes -->
    <!-- 13 -->
    <Rule><!-- Secondary Roads-->
      &maxscale_zoom12;
      &minscale_zoom13;
      <Filter>[highway] = 'residential' or [highway] = 'unclassified'  or [highway] = 'road'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_cyclewayCasing;</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule><!-- Secondary Roads-->
      &maxscale_zoom12;
      &minscale_zoom13;
      <Filter>[highway] = 'secondary' or [highway] = 'tertiary' or [highway] = 'secondary_link' or [highway] = 'tertiary_link' or or [highway] = 'primary_link'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_cyclewayCasing;</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule><!-- Primary Roads-->
      &maxscale_zoom12;
      &minscale_zoom13;
      <Filter>[highway] = 'primary' or [highway] = 'trunk'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_cyclewayCasing;</CssParameter>
        <CssParameter name="stroke-width">5</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    
    <!-- 14 -->
    <Rule><!-- Secondary Roads-->
      &maxscale_zoom14;
      &minscale_zoom14;
      <Filter>[highway] = 'residential' or [highway] = 'unclassified'  or [highway] = 'road'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_cyclewayCasing;</CssParameter>
        <CssParameter name="stroke-width">4</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule><!-- Secondary Roads-->
      &maxscale_zoom14;
      &minscale_zoom14;
      <Filter>[highway] = 'secondary' or [highway] = 'tertiary' or [highway] = 'secondary_link' or [highway] = 'tertiary_link' or or [highway] = 'primary_link'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_cyclewayCasing;</CssParameter>
        <CssParameter name="stroke-width">6</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule><!-- Primary Roads-->
      &maxscale_zoom14;
      &minscale_zoom14;
      <Filter>[highway] = 'primary' or [highway] = 'trunk'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_cyclewayCasing;</CssParameter>
        <CssParameter name="stroke-width">9</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    
	<!-- 15 -->
    <Rule><!-- Residential Roads-->
      &maxscale_zoom15;
      &minscale_zoom15;
      <Filter>[highway] = 'residential' or [highway] = 'unclassified'  or [highway] = 'road'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_cyclewayCasing;</CssParameter>
        <CssParameter name="stroke-width">7</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule><!-- Secondary Roads-->
      &maxscale_zoom15;
      &minscale_zoom15;
      <Filter>[highway] = 'secondary' or [highway] = 'tertiary' or [highway] = 'secondary_link' or [highway] = 'tertiary_link' or or [highway] = 'primary_link'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_cyclewayCasing;</CssParameter>
        <CssParameter name="stroke-width">7</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule><!-- Primary Roads-->
      &maxscale_zoom15;
      &minscale_zoom15;
      <Filter>[highway] = 'primary' or [highway] = 'trunk'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_cyclewayCasing;</CssParameter>
        <CssParameter name="stroke-width">12</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>

	<!-- 16-18 -->
    <Rule><!-- Service Casing-->
      &maxscale_zoom16;
      &minscale_zoom18;
      <Filter>[highway] = 'service'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_cyclewayCasing;</CssParameter>
        <CssParameter name="stroke-width">6</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule><!-- Residential Casing-->
      &maxscale_zoom16;
      &minscale_zoom18;
      <Filter>[highway] = 'residential' or [highway] = 'unclassified'  or [highway] = 'road'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_cyclewayCasing;</CssParameter>
        <CssParameter name="stroke-width">12</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule><!-- Secondary Casing-->
      &maxscale_zoom16;
      &minscale_zoom18;
      <Filter>[highway] = 'secondary' or [highway] = 'tertiary' or [highway] = 'secondary_link' or [highway] = 'tertiary_link' or [highway] = 'motorway_link' or [highway] = 'primary_link'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_cyclewayCasing;</CssParameter>
        <CssParameter name="stroke-width">12</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule><!-- Primary Casing-->
      &maxscale_zoom16;
      &minscale_zoom18;
      <Filter>[highway] = 'primary' or [highway] = 'trunk'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_cyclewayCasing;</CssParameter>
        <CssParameter name="stroke-width">16</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
</Style>

<Style name="motorways">
	
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


	<!-- 16-18 -->
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
</Style>

<Style name="roads">
	<!-- 5-7 -->
    <Rule><!-- Primary Roads-->
      &maxscale_zoom5;
      &minscale_zoom7;
      <Filter>[highway] = 'motorway' or [highway] = 'primary' or [highway] = 'trunk'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_highwayResidentialCasing;</CssParameter>
        <CssParameter name="stroke-width">.5</CssParameter>
      </LineSymbolizer>
    </Rule>
    
	<!-- 8-9 -->
    <Rule><!-- Primary Roads-->
      &maxscale_zoom8;
      &minscale_zoom9;
      <Filter>[highway] = 'motorway' or [highway] = 'primary' or [highway] = 'trunk'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_highwayResidentialCasing;</CssParameter>
        <CssParameter name="stroke-width">1</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    
	<!-- 10-11 -->
	<Rule><!-- Secondary Roads-->
      &maxscale_zoom10;
      &minscale_zoom10;
      <Filter>[highway] = 'secondary' or [highway] = 'tertiary' or [highway] = 'secondary_link' or [highway] = 'tertiary_link' or or [highway] = 'primary_link'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_land;</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_highwayResidentialCasing;</CssParameter>
        <CssParameter name="stroke-width">1</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule><!-- Primary Roads-->
      &maxscale_zoom11;
      &minscale_zoom11;
      <Filter>[highway] = 'primary' or [highway] = 'trunk'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_highwayResidentialCasing;</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    
	<!-- 12-13 -->
    <Rule><!-- Residential Roads-->
      &maxscale_zoom12;
      &minscale_zoom13;
      <Filter>[highway] = 'residential' or [highway] = 'unclassified'  or [highway] = 'road'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_land;</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
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
      <Filter>[highway] = 'primary' or [highway] = 'trunk'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_highwayResidentialCasing;</CssParameter>
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
      <Filter>[highway] = 'primary' or [highway] = 'trunk'</Filter>
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
      <Filter>[highway] = 'primary' or [highway] = 'trunk'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_highwayPrimary;</CssParameter>
        <CssParameter name="stroke-width">8</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>

	<!-- 16-18 -->
    <Rule><!-- Service Roads-->
      &maxscale_zoom16;
      &minscale_zoom18;
      <Filter>[highway] = 'service'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_highwayResidential;</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule><!-- Residential Roads-->
      &maxscale_zoom16;
      &minscale_zoom18;
      <Filter>[highway] = 'residential' or [highway] = 'unclassified'  or [highway] = 'road'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_highwayResidential;</CssParameter>
        <CssParameter name="stroke-width">8</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule><!-- Secondary Roads-->
      &maxscale_zoom16;
      &minscale_zoom18;
      <Filter>[highway] = 'secondary' or [highway] = 'tertiary' or [highway] = 'secondary_link' or [highway] = 'tertiary_link' or or [highway] = 'primary_link'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_highwayPrimary;</CssParameter>
        <CssParameter name="stroke-width">8</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule><!-- Primary Roads-->
      &maxscale_zoom16;
      &minscale_zoom18;
      <Filter>[highway] = 'primary' or [highway] = 'trunk'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_highwayPrimary;</CssParameter>
        <CssParameter name="stroke-width">12</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
</Style>

<Style name="roads-nocycling">
	<!-- 5-7 -->
    <Rule><!-- Primary Roads-->
      &maxscale_zoom5;
      &minscale_zoom7;
      <Filter>[highway] = 'motorway' or [highway] = 'primary' or [highway] = 'trunk'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_highwayMotorway;</CssParameter>
        <CssParameter name="stroke-width">.5</CssParameter>
      </LineSymbolizer>
    </Rule>
    
	<!-- 8-9 -->
    <Rule><!-- Primary Roads-->
      &maxscale_zoom8;
      &minscale_zoom9;
      <Filter>[highway] = 'motorway' or [highway] = 'primary' or [highway] = 'trunk'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_highwayMotorway;</CssParameter>
        <CssParameter name="stroke-width">1</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    
	<!-- 10-11 -->
	<Rule><!-- Secondary Roads-->
      &maxscale_zoom10;
      &minscale_zoom10;
      <Filter>[highway] = 'secondary' or [highway] = 'tertiary' or [highway] = 'secondary_link' or [highway] = 'tertiary_link' or or [highway] = 'primary_link'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_land;</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_highwayMotorway;</CssParameter>
        <CssParameter name="stroke-width">1</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule><!-- Primary Roads-->
      &maxscale_zoom11;
      &minscale_zoom11;
      <Filter>[highway] = 'primary' or [highway] = 'trunk'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_highwayMotorway;</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    
	<!-- 12-13 -->
    <Rule><!-- Residential Roads-->
      &maxscale_zoom12;
      &minscale_zoom13;
      <Filter>[highway] = 'residential' or [highway] = 'unclassified'  or [highway] = 'road'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_land;</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
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
      <Filter>[highway] = 'primary' or [highway] = 'trunk'</Filter>
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
      <Filter>[highway] = 'primary' or [highway] = 'trunk'</Filter>
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
      <Filter>[highway] = 'primary' or [highway] = 'trunk'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_highwayMotorway;</CssParameter>
        <CssParameter name="stroke-width">8</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>

	<!-- 16-18 -->
    <Rule><!-- Service Roads-->
      &maxscale_zoom16;
      &minscale_zoom18;
      <Filter>[highway] = 'service'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_highwayMotorway;</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule><!-- Residential Roads-->
      &maxscale_zoom16;
      &minscale_zoom18;
      <Filter>[highway] = 'residential' or [highway] = 'unclassified'  or [highway] = 'road'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_highwayMotorway;</CssParameter>
        <CssParameter name="stroke-width">8</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule><!-- Secondary Roads-->
      &maxscale_zoom16;
      &minscale_zoom18;
      <Filter>[highway] = 'secondary' or [highway] = 'tertiary' or [highway] = 'secondary_link' or [highway] = 'tertiary_link' or or [highway] = 'primary_link'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_highwayMotorway;</CssParameter>
        <CssParameter name="stroke-width">8</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule><!-- Primary Roads-->
      &maxscale_zoom16;
      &minscale_zoom18;
      <Filter>[highway] = 'primary' or [highway] = 'trunk'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_highwayMotorway;</CssParameter>
        <CssParameter name="stroke-width">12</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
</Style>

<Style name="cycle-networks">
	<!-- 5-7 -->
    <Rule><!-- Primary Roads-->
      &maxscale_zoom5;
      &minscale_zoom7;
      <Filter>[highway] = 'motorway' or [highway] = 'primary' or [highway] = 'trunk'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_cycle_lane;</CssParameter>
        <CssParameter name="stroke-width">.5</CssParameter>
      </LineSymbolizer>
    </Rule>
    
	<!-- 8-9 -->
    <Rule><!-- Primary Roads-->
      &maxscale_zoom8;
      &minscale_zoom9;
      <Filter>[highway] = 'motorway' or [highway] = 'primary' or [highway] = 'trunk'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_cycle_lane;</CssParameter>
        <CssParameter name="stroke-width">1</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    
	<!-- 10-11 -->
    <Rule><!-- Residential Roads-->
      &maxscale_zoom10;
      &minscale_zoom11;
      <Filter>[highway] = 'residential' or [highway] = 'unclassified'  or [highway] = 'road'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_land;</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_cycle_lane;</CssParameter>
        <CssParameter name="stroke-width">1</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
	<Rule><!-- Secondary Roads-->
      &maxscale_zoom10;
      &minscale_zoom10;
      <Filter>[highway] = 'secondary' or [highway] = 'tertiary' or [highway] = 'secondary_link' or [highway] = 'tertiary_link' or or [highway] = 'primary_link'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_land;</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_cycle_lane;</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule><!-- Primary Roads-->
      &maxscale_zoom11;
      &minscale_zoom11;
      <Filter>[highway] = 'primary' or [highway] = 'trunk'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_cycle_lane;</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    
	<!-- 12-13 -->
    <Rule><!-- Residential Roads-->
      &maxscale_zoom12;
      &minscale_zoom13;
      <Filter>[highway] = 'residential' or [highway] = 'unclassified'  or [highway] = 'road'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_land;</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_cycle_lane;</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule><!-- Secondary Roads-->
      &maxscale_zoom12;
      &minscale_zoom13;
      <Filter>[highway] = 'secondary' or [highway] = 'tertiary' or [highway] = 'secondary_link' or [highway] = 'tertiary_link' or or [highway] = 'primary_link'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_cycle_lane;</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule><!-- Primary Roads-->
      &maxscale_zoom12;
      &minscale_zoom13;
      <Filter>[highway] = 'primary' or [highway] = 'trunk'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_cycle_lane;</CssParameter>
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
        <CssParameter name="stroke">&color_cycle_lane;</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule><!-- Secondary Roads-->
      &maxscale_zoom14;
      &minscale_zoom14;
      <Filter>[highway] = 'secondary' or [highway] = 'tertiary' or [highway] = 'secondary_link' or [highway] = 'tertiary_link' or or [highway] = 'primary_link'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_cycle_lane;</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule><!-- Primary Roads-->
      &maxscale_zoom14;
      &minscale_zoom14;
      <Filter>[highway] = 'primary' or [highway] = 'trunk'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_cycle_lane;</CssParameter>
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
        <CssParameter name="stroke">&color_cycle_lane;</CssParameter>
        <CssParameter name="stroke-width">4</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule><!-- Secondary Roads-->
      &maxscale_zoom15;
      &minscale_zoom15;
      <Filter>[highway] = 'secondary' or [highway] = 'tertiary' or [highway] = 'secondary_link' or [highway] = 'tertiary_link' or or [highway] = 'primary_link'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_cycle_lane;</CssParameter>
        <CssParameter name="stroke-width">4</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule><!-- Primary Roads-->
      &maxscale_zoom15;
      &minscale_zoom15;
      <Filter>[highway] = 'primary' or [highway] = 'trunk'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_cycle_lane;</CssParameter>
        <CssParameter name="stroke-width">8</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>

	<!-- 16-18 -->
    <Rule><!-- Service Roads-->
      &maxscale_zoom16;
      &minscale_zoom18;
      <Filter>[highway] = 'service'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_cycle_lane;</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule><!-- Residential Roads-->
      &maxscale_zoom16;
      &minscale_zoom18;
      <Filter>[highway] = 'residential' or [highway] = 'unclassified'  or [highway] = 'road'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_cycle_lane;</CssParameter>
        <CssParameter name="stroke-width">8</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule><!-- Secondary Roads-->
      &maxscale_zoom16;
      &minscale_zoom18;
      <Filter>[highway] = 'secondary' or [highway] = 'tertiary' or [highway] = 'secondary_link' or [highway] = 'tertiary_link' or or [highway] = 'primary_link'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_cycle_lane;</CssParameter>
        <CssParameter name="stroke-width">8</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule><!-- Primary Roads-->
      &maxscale_zoom16;
      &minscale_zoom18;
      <Filter>[highway] = 'primary' or [highway] = 'trunk'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">&color_cycle_lane;</CssParameter>
        <CssParameter name="stroke-width">12</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
</Style>

<Layer name="roads-casing" status="on" srs="&osm2pgsql_projection;">
    <StyleName>roads-casing</StyleName>
    <Datasource>
      <Parameter name="table">
      (select way,highway
       from &prefix;_line
       where highway is not null
       and (cycleway is null or cycleway not in ('lane', 'track', 'opposite_lane', 'opposite_lane','opposite_track','left','right'))
       and ( access is null or access = 'permissive' )
       and ( service is null or service != 'parking_aisle' )
       order by z_order
      ) as roads
      </Parameter>
      &datasource-settings;
    </Datasource>
</Layer>

<Layer name="cycle-lanes" status="on" srs="&osm2pgsql_projection;">
    <StyleName>cycle-lanes</StyleName>
    <Datasource>
      <Parameter name="table">
      (select way,highway
       from &prefix;_line
       where highway is not null
       and (cycleway is not null and cycleway in ('lane', 'track', 'opposite_lane', 'opposite_lane','opposite_track','left','right'))
       and ( access is null or access = 'permissive' )
       and ( service is null or service != 'parking_aisle' )
       order by z_order
      ) as roads
      </Parameter>
      &datasource-settings;
    </Datasource>
</Layer>

<Layer name="motorways" status="on" srs="&osm2pgsql_projection;">
    <StyleName>motorways</StyleName>
    <Datasource>
      <Parameter name="table">
      (select way,highway
       from &prefix;_line
       where highway = 'motorway' or highway = 'motorway_link'
       and ( access is null or access = 'permissive' )
       order by z_order
      ) as roads
      </Parameter>
      &datasource-settings;
    </Datasource>
</Layer>

<Layer name="roads" status="on" srs="&osm2pgsql_projection;">
    <StyleName>roads</StyleName>
    <Datasource>
      <Parameter name="table">
      (select way,highway,cycleway,bicycle
       from &prefix;_line
       where highway is not null
       and highway != 'motorway'
       and highway != 'motorway_link'
       and (lcn is null or lcn != 'yes')
       and (rcn is null or rcn != 'yes')
       and (bicycle is null or bicycle != 'no')
       and ( access is null or access = 'permissive' )
       and ( service is null or service != 'parking_aisle' )
       order by z_order
      ) as roads
      </Parameter>
      &datasource-settings;
    </Datasource>
</Layer>

<Layer name="roads-nocycling" status="on" srs="&osm2pgsql_projection;">
    <StyleName>roads-nocycling</StyleName>
    <Datasource>
      <Parameter name="table">
      (select way,highway,cycleway,bicycle
       from &prefix;_line
       where highway is not null
       and highway != 'motorway'
       and highway != 'motorway_link'
       and bicycle = 'no'
       and ( access is null or access = 'permissive' )
       and ( service is null or service != 'parking_aisle' )
       order by z_order
      ) as roads
      </Parameter>
      &datasource-settings;
    </Datasource>
</Layer>

<Layer name="cycle-networks" status="on" srs="&osm2pgsql_projection;">
    <StyleName>cycle-networks</StyleName>
    <Datasource>
      <Parameter name="table">
      (select way,highway,cycleway
       from &prefix;_line
       where highway is not null
       and highway != 'motorway'
       and highway != 'motorway_link'
       and (lcn = 'yes' or rcn = 'yes')
       and ( access is null or access = 'permissive' )
       and ( service is null or service != 'parking_aisle' )
       order by z_order
      ) as roads
      </Parameter>
      &datasource-settings;
    </Datasource>
</Layer>

