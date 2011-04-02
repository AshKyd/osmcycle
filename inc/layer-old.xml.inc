<Style name="world">
    <Rule>
      <MaxScaleDenominator>250000000000</MaxScaleDenominator>
      <MinScaleDenominator>600000</MinScaleDenominator>
      <PolygonSymbolizer>
        <CssParameter name="fill">#fdf9f3</CssParameter>
      </PolygonSymbolizer>
    </Rule>
</Style>
<Style name="coast-poly">
    <Rule>
      <MaxScaleDenominator>600000</MaxScaleDenominator>
      <PolygonSymbolizer>
        <CssParameter name="fill">#fdf9f3</CssParameter>
      </PolygonSymbolizer>
    </Rule>
</Style>


<Style name="leisure">
    <Rule>
      <Filter>[natural] = 'beach'</Filter>
      <MaxScaleDenominator>300000</MaxScaleDenominator>
      <PolygonSymbolizer>
         <CssParameter name="fill">#FEF0BA</CssParameter>
      </PolygonSymbolizer>
    </Rule>
    <Rule>
      <Filter>[natural] = 'forest' or [natural] = 'wood' or [leisure] = 'park' or [landuse] = 'common'  or [landuse] = 'recreation_ground' or [natural] = 'marsh' or [natural] = 'wetland'</Filter>
      <MaxScaleDenominator>300000</MaxScaleDenominator>
      <PolygonSymbolizer>
         <CssParameter name="fill">#E6F2D4</CssParameter>
      </PolygonSymbolizer>
    </Rule>
    <Rule>
      <Filter>[natural] = 'forest' or [natural] = 'wood'</Filter>
      <MaxScaleDenominator>100000</MaxScaleDenominator>
      <PolygonPatternSymbolizer file= "/home/ash/Misc/ProgramFiles/mapnik/symbols/forest.png" type="png" width="16" height="16"/>
    </Rule>
    <Rule>
      <Filter>[natural] = 'marsh' or [natural] = 'wetland'</Filter>
      <MaxScaleDenominator>100000</MaxScaleDenominator>
      <PolygonPatternSymbolizer file= "/home/ash/Misc/ProgramFiles/mapnik/symbols/wetland.png" type="png" width="16" height="16"/>
    </Rule>
</Style>



%land-contours;

<Style name="stations">
    <Rule>
      <MaxScaleDenominator>200000</MaxScaleDenominator>
      <MinScaleDenominator>60000</MinScaleDenominator>
      <Filter>[railway]='station' and not [disused]='yes'</Filter>
      <PointSymbolizer file =  "/home/ash/Misc/ProgramFiles/mapnik/symbols/station_small.png" type="png" width="4" height="4" />
      <TextSymbolizer name="name" face_name="DejaVu Sans Bold" size="9" fill="green" halo_radius="1" wrap_width="0"/>
    </Rule>
    <Rule>
      <MaxScaleDenominator>60000</MaxScaleDenominator>
      <Filter>[railway]='station' and not [disused]='yes'</Filter>
      <PointSymbolizer file =  "/home/ash/Misc/ProgramFiles/mapnik/symbols/station.png" type="png" width="16" height="16" />
      <TextSymbolizer name="name" face_name="DejaVu Sans Bold" size="9" fill="green" halo_radius="1" wrap_width="0"/>
    </Rule>
</Style>
<Style name="symbols">
    <Rule>
      <MaxScaleDenominator>500000</MaxScaleDenominator>
      <Filter>[natural]='peak'</Filter>
      <PointSymbolizer file= "/home/ash/Misc/ProgramFiles/mapnik/symbols/peak.png" type="png" width="8" height="8" />
    </Rule>
    <Rule>
      <MaxScaleDenominator>20000</MaxScaleDenominator>
      <Filter>[highway]='gate' or [barrier]='gate'</Filter>
      <PointSymbolizer file= "/home/ash/Misc/ProgramFiles/mapnik/symbols/gate2.png" type="png" width="7" height="5" allow_overlap="false"/>
    </Rule>
</Style>
<Style name="points">
    <Rule>
      <MaxScaleDenominator>20000</MaxScaleDenominator>
      <Filter>[amenity]='shelter'</Filter>
      <PointSymbolizer file= "/home/ash/Misc/ProgramFiles/mapnik/symbols/shelter.png" type="png" width="16" height="16" />
    </Rule>
    <Rule>
      <MaxScaleDenominator>30000</MaxScaleDenominator>
      <Filter>[amenity]='drinking_water'</Filter>
      <PointSymbolizer file= "/home/ash/Misc/ProgramFiles/mapnik/symbols/drinking-water.png" type="png" width="16" height="16" />
    </Rule>
    <Rule>
      <MaxScaleDenominator>50000</MaxScaleDenominator>
      <Filter>[amenity]='toilets'</Filter>
      <PointSymbolizer file= "/home/ash/Misc/ProgramFiles/mapnik/symbols/toilets.png" type="png" width="16" height="16" />
    </Rule>
    <Rule>
      <MaxScaleDenominator>100000</MaxScaleDenominator>
      <Filter>[amenity]='bicycle_parking'</Filter>
      <PointSymbolizer file= "/home/ash/Misc/ProgramFiles/mapnik/symbols/bicycle.parking.png" type="png" width="16" height="16" />
    </Rule>
    <Rule>
    <MaxScaleDenominator>5000</MaxScaleDenominator>
    <Filter>[highway]='traffic_signals'</Filter>
    <PointSymbolizer file= "/home/ash/Misc/ProgramFiles/mapnik/symbols/traffic_light.png" type="png" width="16" height="16" />
    </Rule>
    <Rule>
    <MaxScaleDenominator>20000</MaxScaleDenominator>
    <MinScaleDenominator>5000</MinScaleDenominator>
    <Filter>[highway]='traffic_signals'</Filter>
    <PointSymbolizer file= "/home/ash/Misc/ProgramFiles/mapnik/symbols/traffic_light_small.png" type="png" width="6" height="6" />
    </Rule>
    <Rule>
      <MaxScaleDenominator>25000</MaxScaleDenominator>
      <Filter>[amenity]='hospital'</Filter>
      <PointSymbolizer file= "/home/ash/Misc/ProgramFiles/mapnik/symbols/hospital.p.16.png" type="png" width="16" height="16" />
    </Rule>
    <Rule>
      <MaxScaleDenominator>10000</MaxScaleDenominator>
      <Filter>[amenity]='telephone'</Filter>
      <PointSymbolizer file= "/home/ash/Misc/ProgramFiles/mapnik/symbols/telephone.p.16.png" type="png" width="16" height="16" />
    </Rule>
    <Rule>
      <MaxScaleDenominator>10000</MaxScaleDenominator>
      <Filter>[tourism]='viewpoint'</Filter>
      <PointSymbolizer file= "/home/ash/Misc/ProgramFiles/mapnik/symbols/view_point.p.16.png" type="png" width="16" height="16" />
    </Rule>
</Style>
<Style name="cycle-routes-border">
    <Rule>
      <Filter>([cycleway] = 'lane' or [cycleway] = 'opposite_lane' or [cycleway] = 'track' or [cycleway] = 'opposite_track' or [cycleway] = 'opposite') and not [highway] = 'cycleway'</Filter>
      <MaxScaleDenominator>200000</MaxScaleDenominator>
      <MinScaleDenominator>20000</MinScaleDenominator>
      <LineSymbolizer>
        <CssParameter name="stroke">green</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>([cycleway] = 'lane' or [cycleway] = 'opposite_lane' or [cycleway] = 'track' or [cycleway] = 'opposite_track' or [cycleway] = 'opposite') and not [highway] = 'cycleway'</Filter>
      <MaxScaleDenominator>20000</MaxScaleDenominator>
      <LineSymbolizer>
        <CssParameter name="stroke">green</CssParameter>
        <CssParameter name="stroke-width">6</CssParameter>
      </LineSymbolizer>
    </Rule>
</Style>
<Style name="buildings">
    <Rule>
      <Filter>[building] &lt;&gt; 'no'</Filter>
      <MaxScaleDenominator>20000</MaxScaleDenominator>
      <PolygonSymbolizer>
         <CssParameter name="fill">#f9edda</CssParameter>
      </PolygonSymbolizer>
    </Rule>
</Style>
<!--Style name="area-text">
    <Rule>
      <Filter>[way_area] &gt;= 150000</Filter>
      <MaxScaleDenominator>50000</MaxScaleDenominator>
      <TextSymbolizer name="name" face_name="DejaVu Sans Book" size="10" fill="#000033" halo_radius="1" wrap_width="20"/>
    </Rule>
    <Rule>
      <Filter>[way_area] &gt;= 80000 and [way_area] &lt; 150000</Filter>
      <MaxScaleDenominator>20000</MaxScaleDenominator>
      <TextSymbolizer name="name" face_name="DejaVu Sans Book" size="10" fill="#000033" halo_radius="1" wrap_width="20"/>
    </Rule>
    <Rule>
      <Filter>[way_area] &gt;= 20000 and [way_area] &lt; 80000</Filter>
      <MaxScaleDenominator>10000</MaxScaleDenominator>
      <TextSymbolizer name="name" face_name="DejaVu Sans Book" size="10" fill="#000033" halo_radius="1" wrap_width="20"/>
    </Rule>
    <Rule>
      <Filter>[way_area] &lt; 20000</Filter>
      <MaxScaleDenominator>5000</MaxScaleDenominator>
      <TextSymbolizer name="name" face_name="DejaVu Sans Book" size="10" fill="#000033" halo_radius="1" wrap_width="20"/>
    </Rule>
</Style-->
<Style name="country">
    <Rule>
      <Filter>[place] = 'country'</Filter>
      <MaxScaleDenominator>200000000</MaxScaleDenominator>
      <MinScaleDenominator>50000000</MinScaleDenominator>
      <TextSymbolizer name="name" face_name="DejaVu Sans Book" size="9" fill="#9d6c9d" dy="0" halo_radius="1" wrap_width="0"/>
    </Rule>
    <Rule>
      <Filter>[place] = 'country'</Filter>
      <MaxScaleDenominator>50000000</MaxScaleDenominator>
      <MinScaleDenominator>5000000</MinScaleDenominator>
      <TextSymbolizer name="name" face_name="DejaVu Sans Book" size="11" fill="#9d6c9d" dy="0" halo_radius="1" wrap_width="0"/>
    </Rule>
</Style>
<Style name="state">
    <Rule>
      <Filter>[place] = 'state'</Filter>
      <MaxScaleDenominator>50000000</MaxScaleDenominator>
      <MinScaleDenominator>25000000</MinScaleDenominator>
      <TextSymbolizer name="ref" face_name="DejaVu Sans Oblique" size="9" fill="#9d6c9d" dy="0" halo_radius="1" wrap_width="0"/>
    </Rule>
    <Rule>
      <Filter>[place] = 'state'</Filter>
      <MaxScaleDenominator>25000000</MaxScaleDenominator>
      <MinScaleDenominator>5000000</MinScaleDenominator>
      <TextSymbolizer name="name" face_name="DejaVu Sans Oblique" size="9" fill="#9d6c9d" dy="0" halo_radius="1" wrap_width="0"/>
    </Rule>
    <Rule>
      <Filter>[place] = 'state'</Filter>
      <MaxScaleDenominator>5000000</MaxScaleDenominator>
      <MinScaleDenominator>2000000</MinScaleDenominator>
      <TextSymbolizer name="name" face_name="DejaVu Sans Oblique" size="11" fill="#9d6c9d" dy="0" halo_radius="1" wrap_width="0"/>
    </Rule>
</Style>
<Style name="capital">
     <Rule>
      <Filter>([place] = 'city' or [place]='metropolis') and [capital]='yes'</Filter>
      <MaxScaleDenominator>50000000</MaxScaleDenominator>
      <MinScaleDenominator>10000000</MinScaleDenominator>
      <TextSymbolizer name="name" face_name="DejaVu Sans Book" size="9" fill="#000" dy="0" halo_radius="1" wrap_width="0"/>
    </Rule>
    <Rule>
      <Filter>([place] = 'city' or [place]='metropolis') and [capital]='yes'</Filter>
      <MaxScaleDenominator>10000000</MaxScaleDenominator>
      <MinScaleDenominator>2000000</MinScaleDenominator>
      <TextSymbolizer name="name" face_name="DejaVu Sans Book" size="11" fill="#000" dy="0" halo_radius="1" wrap_width="0"/>
    </Rule>
    <Rule>
      <Filter>([place] = 'city' or [place]='metropolis') and [capital]='yes'</Filter>
      <MaxScaleDenominator>2000000</MaxScaleDenominator>
      <MinScaleDenominator>500000</MinScaleDenominator>
      <TextSymbolizer name="name" face_name="DejaVu Sans Book" size="11" fill="#000" dy="0" halo_radius="1" wrap_width="0"/>
    </Rule>
    <Rule>
      <Filter>([place] = 'city' or [place]='metropolis') and [capital]='yes'</Filter>
      <MaxScaleDenominator>500000</MaxScaleDenominator>
      <MinScaleDenominator>20000</MinScaleDenominator>
      <TextSymbolizer name="name" face_name="DejaVu Sans Book" size="14" fill="#000" dy="0" halo_radius="1" wrap_width="0"/>
    </Rule>
</Style>
<Style name="city">
    <Rule>
      <Filter>([place] = 'city' or [place]='metropolis') and not [capital]='yes'</Filter>
      <MaxScaleDenominator>10000000</MaxScaleDenominator>
      <MinScaleDenominator>2000000</MinScaleDenominator>
      <TextSymbolizer name="name" face_name="DejaVu Sans Book" size="8" fill="#000" dy="0" halo_radius="1" wrap_width="0"/>
    </Rule>
    <Rule>
      <Filter>([place] = 'city' or [place]='metropolis') and not [capital]='yes'</Filter>
      <MaxScaleDenominator>2000000</MaxScaleDenominator>
      <MinScaleDenominator>500000</MinScaleDenominator>
      <TextSymbolizer name="name" face_name="DejaVu Sans Book" size="11" fill="#000" dy="0" halo_radius="1" wrap_width="0"/>
    </Rule>
    <Rule>
      <Filter>([place] = 'city' or [place]='metropolis') and not [capital]='yes'</Filter>
      <MaxScaleDenominator>500000</MaxScaleDenominator>
      <MinScaleDenominator>20000</MinScaleDenominator>
      <TextSymbolizer name="name" face_name="DejaVu Sans Book" size="14" fill="#000" dy="0" halo_radius="1" wrap_width="0"/>
    </Rule>
</Style>
<Style name="town">
    <Rule>
      <Filter>[place] = 'town' or [place]='large_town' or [place]='small_town'</Filter>
      <MaxScaleDenominator>300000</MaxScaleDenominator>
      <TextSymbolizer name="name" face_name="DejaVu Sans Book" size="13" fill="#000" halo_radius="1" wrap_width="20"/>
    </Rule>
</Style>
<Style name="suburb">
    <Rule>
      <Filter>[place] = 'suburb'</Filter>
      <MaxScaleDenominator>50000</MaxScaleDenominator>
      <TextSymbolizer name="name" face_name="DejaVu Sans Book" size="13" fill="#777777" halo_radius="1" wrap_width="0"/>
    </Rule>
    <Rule>
      <Filter>[place] = 'suburb'</Filter>
      <MaxScaleDenominator>100000</MaxScaleDenominator>
      <MinScaleDenominator>50000</MinScaleDenominator>
      <TextSymbolizer name="name" face_name="DejaVu Sans Book" size="10" fill="#777777" halo_radius="1" wrap_width="0"/>
    </Rule>
</Style>
<Style name="village">
    <Rule>
      <Filter>[place] = 'village' or [place]='large_village'</Filter>
      <MaxScaleDenominator>40000</MaxScaleDenominator>
      <TextSymbolizer name="name" face_name="DejaVu Sans Book" size="12" fill="#777777" halo_radius="1" wrap_width="0"/>
    </Rule>
</Style>
<Style name="hamlet">
    <Rule>
      <Filter>[place] = 'hamlet' or [place] = 'locality'</Filter>
      <MaxScaleDenominator>10000</MaxScaleDenominator>
      <TextSymbolizer name="name" face_name="DejaVu Sans Book" size="11" fill="#777777" halo_radius="1" wrap_width="0"/>
    </Rule>
</Style>
<Style name="text">
    <Rule>
      <Filter>[natural] = 'peak'</Filter>
      <MaxScaleDenominator>100000</MaxScaleDenominator>
      <TextSymbolizer name="name" face_name="DejaVu Sans Book" size="10" fill="green" dy="10" halo_radius="1"/>
    </Rule>
    <Rule>
      <Filter>[natural] = 'peak'</Filter>
      <MaxScaleDenominator>50000</MaxScaleDenominator>
      <TextSymbolizer name="ele" face_name="DejaVu Sans Oblique" size="9" fill="green" dy="20" halo_radius="1"/>
    </Rule>
    <Rule>
      <Filter>[natural] = 'water' or [natural] = 'lake' or [landuse] = 'reservoir' or [landuse] = 'basin'</Filter>
      <MaxScaleDenominator>5000</MaxScaleDenominator>
      <TextSymbolizer name="name" face_name="DejaVu Sans Book" size="10" fill="#6699cc" halo_radius="1" wrap_width="20"/>
    </Rule>
    <Rule>
      <Filter>[tourism] = 'attraction'</Filter>
      <MaxScaleDenominator>5000</MaxScaleDenominator>
      <TextSymbolizer name="name" face_name="DejaVu Sans Book" size="10" fill="#660033" halo_radius="2" wrap_width="10"/>
    </Rule>
    <Rule>
      <Filter>[military] = 'danger_area'</Filter>
      <MaxScaleDenominator>200000</MaxScaleDenominator>
      <TextSymbolizer name="name" face_name="DejaVu Sans Bold" size="9" fill="pink" halo_radius="1" wrap_width="10"/>
    </Rule>
</Style>
<Style name="water_areas">
    <Rule>
      <Filter>[waterway] = 'dock' or [landuse] = 'reservoir' or [landuse] = 'water' or [waterway] = 'mill_pond' or [waterway] = 'riverbank' or [waterway]='canal'</Filter>
      <MaxScaleDenominator>2000000</MaxScaleDenominator>
      <PolygonSymbolizer>
        <CssParameter name="fill">#B0D3EB</CssParameter>
     </PolygonSymbolizer>
    </Rule>
    <Rule>
      <Filter>[natural] = 'lake' or [natural] = 'water'</Filter>
      <MaxScaleDenominator>10000000</MaxScaleDenominator>
      <PolygonSymbolizer>
        <CssParameter name="fill">#B0D3EB</CssParameter>
     </PolygonSymbolizer>
    </Rule>
    <Rule>
      <MaxScaleDenominator>100000</MaxScaleDenominator>
      <Filter>[natural] = 'scrub'</Filter>
      <PolygonPatternSymbolizer file= "/home/ash/Misc/ProgramFiles/mapnik/symbols/scrub.png" type="png" width="30" height="30"/>
    </Rule>
    <Rule>
      <Filter>[natural] = 'land'</Filter>
      <MaxScaleDenominator>1000000</MaxScaleDenominator>
      <PolygonSymbolizer>
        <CssParameter name="fill">#f2efe9</CssParameter>
     </PolygonSymbolizer>
    </Rule>
</Style>
<Style name="water_lines">
    <Rule>
      <Filter>[waterway]='weir'</Filter>
      <MaxScaleDenominator>20000</MaxScaleDenominator>
      <MinScaleDenominator>1000</MinScaleDenominator>
      <LineSymbolizer>
        <CssParameter name="stroke">#aaa</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[waterway]='river'</Filter>
      <MaxScaleDenominator>250000</MaxScaleDenominator>
      <MinScaleDenominator>25000</MinScaleDenominator>
      <LineSymbolizer>
        <CssParameter name="stroke">#B0D3EB</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[waterway]='canal' and not [disused]='yes'</Filter>
      <MaxScaleDenominator>250000</MaxScaleDenominator>
      <MinScaleDenominator>100000</MinScaleDenominator>
      <LineSymbolizer>
        <CssParameter name="stroke">#B0D3EB</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[waterway]='canal' and not [disused]='yes'</Filter>
      <MaxScaleDenominator>100000</MaxScaleDenominator>
      <MinScaleDenominator>50000</MinScaleDenominator>
      <LineSymbolizer>
        <CssParameter name="stroke">#B0D3EB</CssParameter>
        <CssParameter name="stroke-width">4</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
      <TextSymbolizer name="name" face_name="DejaVu Sans Book" size="8" fill="#6699cc" halo_radius="1" placement="line"/>
    </Rule>
    <Rule>
      <ElseFilter/> <!--[waterway]='stream'</Filter>-->
      <MaxScaleDenominator>100000</MaxScaleDenominator>
      <MinScaleDenominator>25000</MinScaleDenominator>
      <LineSymbolizer>
        <CssParameter name="stroke">#B0D3EB</CssParameter>
        <CssParameter name="stroke-width">1</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[waterway]='river' and not [tunnel] = 'yes'</Filter>
      <MaxScaleDenominator>25000</MaxScaleDenominator>
      <MinScaleDenominator>1000</MinScaleDenominator>
      <LineSymbolizer>
        <CssParameter name="stroke">#B0D3EB</CssParameter>
        <CssParameter name="stroke-width">10</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
      <TextSymbolizer name="name" face_name="DejaVu Sans Book" size="10" fill="#6699cc" halo_radius="1" placement="line" min_distance="200"/>
    </Rule>
    <Rule>
      <Filter>[waterway]='river' and [tunnel] = 'yes'</Filter>
      <MaxScaleDenominator>25000</MaxScaleDenominator>
      <MinScaleDenominator>1000</MinScaleDenominator>
      <LineSymbolizer>
        <CssParameter name="stroke">#B0D3EB</CssParameter>
        <CssParameter name="stroke-width">10</CssParameter>
        <CssParameter name="stroke-dasharray">4,2</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">white</CssParameter>
        <CssParameter name="stroke-width">6</CssParameter>
      </LineSymbolizer>
      <TextSymbolizer name="name" face_name="DejaVu Sans Book" size="10" fill="#6699cc" halo_radius="1" placement="line" min_distance="200"/>
    </Rule>
    <Rule>
      <Filter>[waterway]='canal' and [tunnel] = 'yes'</Filter>
      <MaxScaleDenominator>50000</MaxScaleDenominator>
      <MinScaleDenominator>5000</MinScaleDenominator>
       <LineSymbolizer>
        <CssParameter name="stroke">#B0D3EB</CssParameter>
        <CssParameter name="stroke-width">7</CssParameter>
        <CssParameter name="stroke-dasharray">4,2</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">white</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
      </LineSymbolizer>
      <TextSymbolizer name="name" face_name="DejaVu Sans Book" size="9" fill="#6699cc" halo_radius="1" placement="line"/>
    </Rule>
    <Rule>
      <Filter>[waterway]='canal' and not ([tunnel] = 'yes' or [disused]='yes')</Filter>
      <MaxScaleDenominator>50000</MaxScaleDenominator>
      <MinScaleDenominator>5000</MinScaleDenominator>
      <LineSymbolizer>
        <CssParameter name="stroke">#B0D3EB</CssParameter>
        <CssParameter name="stroke-width">7</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
      <TextSymbolizer name="name" face_name="DejaVu Sans Book" size="9" fill="#6699cc" halo_radius="1" placement="line"/>
    </Rule>
    <Rule>
      <Filter>[waterway]='canal' and [tunnel] = 'yes'</Filter>
      <MaxScaleDenominator>5000</MaxScaleDenominator>
      <MinScaleDenominator>1000</MinScaleDenominator>
       <LineSymbolizer>
        <CssParameter name="stroke">#B0D3EB</CssParameter>
        <CssParameter name="stroke-width">11</CssParameter>
        <CssParameter name="stroke-dasharray">4,2</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">white</CssParameter>
        <CssParameter name="stroke-width">7</CssParameter>
      </LineSymbolizer>
      <TextSymbolizer name="name" face_name="DejaVu Sans Book" size="9" fill="#6699cc" halo_radius="1" placement="line"/>
    </Rule>
    <Rule>
      <Filter>[waterway]='canal' and not ([tunnel] = 'yes' or [disused]='yes')</Filter>
      <MaxScaleDenominator>5000</MaxScaleDenominator>
      <MinScaleDenominator>1000</MinScaleDenominator>
      <LineSymbolizer>
        <CssParameter name="stroke">#B0D3EB</CssParameter>
        <CssParameter name="stroke-width">11</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
      <TextSymbolizer name="name" face_name="DejaVu Sans Book" size="9" fill="#6699cc" halo_radius="1" placement="line"/>
    </Rule>
    <Rule>
      <Filter>[waterway]='derelict_canal' or ([waterway]='canal' and [disused]='yes')</Filter>
      <MaxScaleDenominator>250000</MaxScaleDenominator>
      <MinScaleDenominator>100000</MinScaleDenominator>
      <LineSymbolizer>
        <CssParameter name="stroke">#b5e4d0</CssParameter>
        <CssParameter name="stroke-width">1.5</CssParameter>
        <CssParameter name="stroke-dasharray">4,4</CssParameter>
        <CssParameter name="stroke-opacity">0.5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[waterway]='derelict_canal' or ([waterway]='canal' and [disused]='yes')</Filter>
      <MaxScaleDenominator>100000</MaxScaleDenominator>
      <MinScaleDenominator>50000</MinScaleDenominator>
      <LineSymbolizer>
        <CssParameter name="stroke">#b5e4d0</CssParameter>
        <CssParameter name="stroke-width">2.5</CssParameter>
        <CssParameter name="stroke-dasharray">4,6</CssParameter>
        <CssParameter name="stroke-opacity">0.5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
      <TextSymbolizer name="name" face_name="DejaVu Sans Book" size="9" fill="#80d1ae" halo_radius="1" spacing="600" placement="line"/>
    </Rule>
    <Rule>
      <Filter>[waterway]='derelict_canal' or ([waterway]='canal' and [disused]='yes')</Filter>
      <MaxScaleDenominator>50000</MaxScaleDenominator>
      <MinScaleDenominator>1000</MinScaleDenominator>
      <LineSymbolizer>
        <CssParameter name="stroke">#b5e4d0</CssParameter>
        <CssParameter name="stroke-width">4.5</CssParameter>
        <CssParameter name="stroke-dasharray">4,8</CssParameter>
        <CssParameter name="stroke-opacity">0.5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
      <TextSymbolizer name="name" face_name="DejaVu Sans Book" size="10" fill="#80d1ae" halo_radius="1" spacing="600" placement="line"/>
    </Rule>
    <Rule>
      <Filter>([waterway]='stream' or [waterway]='drain') and [tunnel]='yes'</Filter>
      <MaxScaleDenominator>25000</MaxScaleDenominator>
      <MinScaleDenominator>1000</MinScaleDenominator>
      <LineSymbolizer>
        <CssParameter name="stroke">#B0D3EB</CssParameter>
        <CssParameter name="stroke-width">2.4</CssParameter>
        <CssParameter name="stroke-dasharray">4,2</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">#f3f7f7</CssParameter>
        <CssParameter name="stroke-width">1.2</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>([waterway]='stream' or [waterway]='drain') and not [tunnel]='yes'</Filter>
      <MaxScaleDenominator>25000</MaxScaleDenominator>
      <MinScaleDenominator>1000</MinScaleDenominator>
      <LineSymbolizer>
        <CssParameter name="stroke">#B0D3EB</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
      </LineSymbolizer>
      <TextSymbolizer name="name" face_name="DejaVu Sans Book" size="8" fill="#6699cc" halo_radius="1" spacing="600" placement="line"/>
    </Rule>
    <Rule>
      <ElseFilter/> <!--[waterway]='stream'</Filter>-->
      <MaxScaleDenominator>25000</MaxScaleDenominator>
      <MinScaleDenominator>1000</MinScaleDenominator>
      <LineSymbolizer>
        <CssParameter name="stroke">#B0D3EB</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
      </LineSymbolizer>
    </Rule>
</Style>


<Style name="railway-background">  
    <Rule>
      <MaxScaleDenominator>50000</MaxScaleDenominator>
      <MinScaleDenominator>1000</MinScaleDenominator>
      <Filter>[railway] = 'rail'</Filter>
      <LineSymbolizer>
        <CssParameter name="stroke">#fdf9f3</CssParameter>
        <CssParameter name="stroke-width">4</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">#aaa</CssParameter>
        <CssParameter name="stroke-width">4</CssParameter>
        <CssParameter name="stroke-dasharray">2,10</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <MaxScaleDenominator>10000000</MaxScaleDenominator>
      <MinScaleDenominator>50000</MinScaleDenominator>
      <Filter>[railway] = 'rail'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">#aaa</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
        <CssParameter name="stroke-dasharray">2,10</CssParameter>
      </LineSymbolizer>
    </Rule>
</Style>   
<Style name="railway-foreground"> 
    <Rule>
      <MaxScaleDenominator>50000</MaxScaleDenominator>
      <MinScaleDenominator>1000</MinScaleDenominator>
      <Filter>[railway] = 'rail'</Filter>
      <LineSymbolizer>
        <CssParameter name="stroke">#aaa</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
      </LineSymbolizer>
      </Rule> 
    
    <!-- RAIL -->
    <Rule>
      <MaxScaleDenominator>10000000</MaxScaleDenominator>
      <MinScaleDenominator>50000</MinScaleDenominator>
      <Filter>[railway] = 'rail'</Filter>
       <LineSymbolizer>
        <CssParameter name="stroke">#aaa</CssParameter>
        <CssParameter name="stroke-width">1</CssParameter>
      </LineSymbolizer>
    </Rule>
</Style>   

<Style name="minor-roads-fill">     
    
    <Rule>
      <Filter>[highway] = 'motorway' or [highway] = 'motorway_link'</Filter>
      <MaxScaleDenominator>200000</MaxScaleDenominator>
      <MinScaleDenominator>20000</MinScaleDenominator>
      <LineSymbolizer>
        <CssParameter name="stroke">#A28C6A</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'motorway' or [highway] = 'motorway_link'</Filter>
      <MaxScaleDenominator>20000</MaxScaleDenominator>
      <LineSymbolizer>
        <CssParameter name="stroke">#A28C6A</CssParameter>
        <CssParameter name="stroke-width">5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'trunk' or [highway] = 'trunk_link'</Filter>
      <MaxScaleDenominator>500000</MaxScaleDenominator>
      <MinScaleDenominator>20000</MinScaleDenominator>
      <LineSymbolizer>
        <CssParameter name="stroke">#EBC994</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'trunk' or [highway] = 'trunk_link'</Filter>
      <MaxScaleDenominator>20000</MaxScaleDenominator>
      <LineSymbolizer>
        <CssParameter name="stroke">#e9b96e</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>([highway] = 'primary' or [highway] = 'secondary' or [highway] = 'primary_link' or [highway] = 'secondary_link')</Filter>
      <MaxScaleDenominator>300000</MaxScaleDenominator>
      <MinScaleDenominator>200000</MinScaleDenominator>
      <LineSymbolizer>
        <CssParameter name="stroke">#EBC994</CssParameter>
        <CssParameter name="stroke-width">1</CssParameter>
      </LineSymbolizer>
    </Rule> 
    <Rule>
      <Filter>([highway] = 'primary' or [highway] = 'secondary' or [highway] = 'primary_link' or [highway] = 'secondary_link')</Filter>
      <MaxScaleDenominator>200000</MaxScaleDenominator>
      <MinScaleDenominator>20000</MinScaleDenominator>
      <LineSymbolizer>
        <CssParameter name="stroke">#EBC994</CssParameter>
        <CssParameter name="stroke-width">1.5</CssParameter>
      </LineSymbolizer>
    </Rule> 
    <Rule>
      <Filter>([highway] = 'primary' or [highway] = 'secondary' or [highway] = 'primary_link' or [highway] = 'secondary_link')</Filter>
      <MaxScaleDenominator>20000</MaxScaleDenominator>
      <MinScaleDenominator>1000</MinScaleDenominator>
      <LineSymbolizer>
        <CssParameter name="stroke">#e9b96e</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    
    <Rule>
      <Filter>([highway] = 'tertiary')</Filter>
      <MaxScaleDenominator>200000</MaxScaleDenominator>
      <MinScaleDenominator>20000</MinScaleDenominator>
      <LineSymbolizer>
        <CssParameter name="stroke">#EBC994</CssParameter>
        <CssParameter name="stroke-width">1.5</CssParameter>
      </LineSymbolizer>
    </Rule> 
    <Rule>
      <Filter>([highway] = 'tertiary')</Filter>
      <MaxScaleDenominator>20000</MaxScaleDenominator>
      <MinScaleDenominator>1000</MinScaleDenominator>
      <LineSymbolizer>
        <CssParameter name="stroke">#EBC994</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    
    <Rule>
      <Filter>([highway] = 'tertiary' or [highway] = 'road' or [highway] = 'unclassified')</Filter>
      <MaxScaleDenominator>550000</MaxScaleDenominator>
      <MinScaleDenominator>150000</MinScaleDenominator>
      <LineSymbolizer>
        <CssParameter name="stroke">#EBC994</CssParameter>
        <CssParameter name="stroke-width">0.5</CssParameter>
      </LineSymbolizer>
    </Rule>
    
    <Rule>
      <Filter>([highway] = 'tertiary' or [highway] = 'residential' or [highway] = 'road' or [highway] = 'living_street' or [highway] = 'unclassified')</Filter>
      <MaxScaleDenominator>200000</MaxScaleDenominator>
      <MinScaleDenominator>20000</MinScaleDenominator>
      <LineSymbolizer>
        <CssParameter name="stroke">#EBC994</CssParameter>
        <CssParameter name="stroke-width">0.5</CssParameter>
      </LineSymbolizer>
    </Rule>
    
    <Rule>
      <Filter>([highway] = 'residential' or [highway] = 'road' or [highway] = 'living_street' or [highway] = 'unclassified')</Filter>
      <MaxScaleDenominator>20000</MaxScaleDenominator>
      <MinScaleDenominator>1000</MinScaleDenominator>
      <LineSymbolizer>
        <CssParameter name="stroke">#EBC994</CssParameter>
        <CssParameter name="stroke-width">1.5</CssParameter>
      </LineSymbolizer>
    </Rule>
    
    <Rule>
      <Filter>([highway] = 'service')</Filter>
      <MaxScaleDenominator>20000</MaxScaleDenominator>
      <MinScaleDenominator>1000</MinScaleDenominator>
      <LineSymbolizer>
        <CssParameter name="stroke">#EBC994</CssParameter>
        <CssParameter name="stroke-width">1</CssParameter>
      </LineSymbolizer>
    </Rule>
    
    <Rule>
      <Filter>[highway] = 'track' and [bicycle] = 'yes'</Filter>
      <MaxScaleDenominator>700000</MaxScaleDenominator>
      <MinScaleDenominator>50000</MinScaleDenominator>
      <LineSymbolizer>
        <CssParameter name="stroke">white</CssParameter>
        <CssParameter name="stroke-width">2.5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
        <CssParameter name="stroke-opacity">0.4</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">#6F8F08</CssParameter>
        <CssParameter name="stroke-width">1.2</CssParameter>
        <CssParameter name="stroke-dasharray">3,4</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
     </Rule> 
     
    <Rule>
      <Filter>[tunnel] = 'yes'</Filter>
      <LineSymbolizer>
        <CssParameter name="stroke">#fdf9f3</CssParameter>
        <CssParameter name="stroke-width">4</CssParameter>
        <CssParameter name="stroke-dasharray">5,5</CssParameter>
      </LineSymbolizer>
    </Rule>
     
</Style>

<Style name="ferry-routes">
    <Rule>
      <MaxScaleDenominator>5000000</MaxScaleDenominator>
      <MinScaleDenominator>500000</MinScaleDenominator>
      <LineSymbolizer>
        <CssParameter name="stroke">#66f</CssParameter>
        <CssParameter name="stroke-width">0.4</CssParameter>
        <CssParameter name="stroke-dasharray">4,4</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <MaxScaleDenominator>500000</MaxScaleDenominator>
      <LineSymbolizer>
        <CssParameter name="stroke">#66f</CssParameter>
        <CssParameter name="stroke-width">0.8</CssParameter>
        <CssParameter name="stroke-dasharray">6,6</CssParameter>
      </LineSymbolizer>
    </Rule>
</Style>

<Style name="footbikecycle-tunnels">
    <Rule>
      <Filter>[highway] = 'bridleway' or ([highway] = 'path' and [horse] = 'designated')</Filter>
      <MaxScaleDenominator>100000</MaxScaleDenominator>
      <LineSymbolizer>
        <CssParameter name="stroke">grey</CssParameter>
        <CssParameter name="stroke-width">5</CssParameter>
        <CssParameter name="stroke-dasharray">4,2</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">#fff</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">green</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
        <CssParameter name="stroke-dasharray">4,2</CssParameter>
        <CssParameter name="stroke-opacity">0.5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'footway' or ([highway] = 'path' and [foot] = 'designated')</Filter>
      <MaxScaleDenominator>100000</MaxScaleDenominator>
      <LineSymbolizer>
        <CssParameter name="stroke">grey</CssParameter>
        <CssParameter name="stroke-width">5.5</CssParameter>
        <CssParameter name="stroke-dasharray">4,2</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">#fff</CssParameter>
        <CssParameter name="stroke-width">3.5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">salmon</CssParameter>
        <CssParameter name="stroke-width">2.5</CssParameter>
        <CssParameter name="stroke-dasharray">1,3</CssParameter>
        <CssParameter name="stroke-opacity">0.5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'path' and not ([bicycle] = 'designated' or [foot] = 'designated' or [horse] = 'designated')</Filter>
      <MaxScaleDenominator>100000</MaxScaleDenominator>
      <LineSymbolizer>
        <CssParameter name="stroke">grey</CssParameter>
        <CssParameter name="stroke-width">5.5</CssParameter>
        <CssParameter name="stroke-dasharray">4,2</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">white</CssParameter>
        <CssParameter name="stroke-width">1.0</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
        <CssParameter name="stroke-opacity">0.4</CssParameter>
     </LineSymbolizer>
     <LineSymbolizer>
       <CssParameter name="stroke">black</CssParameter>
       <CssParameter name="stroke-width">0.5</CssParameter>
       <CssParameter name="stroke-dasharray">6,3</CssParameter>
       <CssParameter name="stroke-linejoin">round</CssParameter>
       <CssParameter name="stroke-linecap">round</CssParameter>
    </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[highway] = 'cycleway' or ([highway] = 'path' and [bicycle] = 'designated')</Filter>
      <MaxScaleDenominator>100000</MaxScaleDenominator>
      <LineSymbolizer>
        <CssParameter name="stroke">grey</CssParameter>
        <CssParameter name="stroke-width">5</CssParameter>
        <CssParameter name="stroke-dasharray">4,2</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">white</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">blue</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
        <CssParameter name="stroke-dasharray">1,3</CssParameter>
        <CssParameter name="stroke-opacity">0.5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
</Style>
<Style name="tracks-notunnel-nobridge">
    <Rule>
      <Filter>[tracktype]='grade1'</Filter>
      <MaxScaleDenominator>50000</MaxScaleDenominator>
      <LineSymbolizer>
        <CssParameter name="stroke">white</CssParameter>
        <CssParameter name="stroke-width">3.5</CssParameter>
        <CssParameter name="stroke-opacity">0.4</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">#6F8F08</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
        <CssParameter name="stroke-opacity">0.7</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[tracktype]='grade2'</Filter>
      <MaxScaleDenominator>50000</MaxScaleDenominator>
      <LineSymbolizer>
        <CssParameter name="stroke">white</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
        <CssParameter name="stroke-opacity">0.4</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">#6F8F08</CssParameter>
        <CssParameter name="stroke-width">1.5</CssParameter>
        <CssParameter name="stroke-dasharray">9,4</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
        <CssParameter name="stroke-opacity">0.8</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[tracktype]='grade3'</Filter>
      <MaxScaleDenominator>50000</MaxScaleDenominator>
      <LineSymbolizer>
        <CssParameter name="stroke">white</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
        <CssParameter name="stroke-opacity">0.4</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">#6F8F08</CssParameter>
        <CssParameter name="stroke-width">1.5</CssParameter>
        <CssParameter name="stroke-dasharray">3,4</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
        <CssParameter name="stroke-opacity">0.8</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[tracktype]='grade4'</Filter>
      <MaxScaleDenominator>50000</MaxScaleDenominator>
      <LineSymbolizer>
        <CssParameter name="stroke">white</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
        <CssParameter name="stroke-opacity">0.4</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">#6F8F08</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
        <CssParameter name="stroke-dasharray">4,7,1,5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
        <CssParameter name="stroke-opacity">0.8</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[tracktype]='grade5'</Filter>
      <MaxScaleDenominator>50000</MaxScaleDenominator>
      <LineSymbolizer>
        <CssParameter name="stroke">white</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
        <CssParameter name="stroke-opacity">0.4</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">#6F8F08</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
        <CssParameter name="stroke-dasharray">1,5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
        <CssParameter name="stroke-opacity">0.8</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <ElseFilter/>
      <MaxScaleDenominator>50000</MaxScaleDenominator>
      <LineSymbolizer>
        <CssParameter name="stroke">white</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
        <CssParameter name="stroke-opacity">0.4</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">#6F8F08</CssParameter>
        <CssParameter name="stroke-width">1.5</CssParameter>
        <CssParameter name="stroke-dasharray">3,4</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
     </Rule>    
</Style>
<Style name="tracks-bridges">
    <Rule>
     <Filter>[tracktype]='grade1'</Filter>
     <MaxScaleDenominator>50000</MaxScaleDenominator>
     <LineSymbolizer>
        <CssParameter name="stroke">black</CssParameter>
        <CssParameter name="stroke-width">5</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">white</CssParameter>
        <CssParameter name="stroke-width">3.5</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">#6F8F08</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
        <CssParameter name="stroke-opacity">0.7</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
     <Filter>[tracktype]='grade2'</Filter>
     <MaxScaleDenominator>50000</MaxScaleDenominator>
     <LineSymbolizer>
        <CssParameter name="stroke">black</CssParameter>
        <CssParameter name="stroke-width">4.5</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">white</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">#6F8F08</CssParameter>
        <CssParameter name="stroke-width">1.5</CssParameter>
        <CssParameter name="stroke-dasharray">3,4</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
        <CssParameter name="stroke-opacity">0.8</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
     <Filter>[tracktype]='grade3'</Filter>
     <MaxScaleDenominator>50000</MaxScaleDenominator>
     <LineSymbolizer>
        <CssParameter name="stroke">black</CssParameter>
        <CssParameter name="stroke-width">4.5</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">white</CssParameter>
        <CssParameter name="stroke-width">3.5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">#6F8F08</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
        <CssParameter name="stroke-opacity">0.7</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
     <Filter>[tracktype]='grade4'</Filter>
     <MaxScaleDenominator>50000</MaxScaleDenominator>
     <LineSymbolizer>
        <CssParameter name="stroke">black</CssParameter>
        <CssParameter name="stroke-width">4.5</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">white</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">#6F8F08</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
        <CssParameter name="stroke-dasharray">4,7,1,5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
        <CssParameter name="stroke-opacity">0.8</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
     <Filter>[tracktype]='grade5'</Filter>
     <MaxScaleDenominator>50000</MaxScaleDenominator>
     <LineSymbolizer>
        <CssParameter name="stroke">black</CssParameter>
        <CssParameter name="stroke-width">4.5</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">white</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">#6F8F08</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
        <CssParameter name="stroke-dasharray">1,5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
        <CssParameter name="stroke-opacity">0.8</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <ElseFilter/>
      <MaxScaleDenominator>50000</MaxScaleDenominator>
     <LineSymbolizer>
        <CssParameter name="stroke">black</CssParameter>
        <CssParameter name="stroke-width">4.5</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">white</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">#6F8F08</CssParameter>
        <CssParameter name="stroke-width">1.5</CssParameter>
        <CssParameter name="stroke-dasharray">3,4</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
     </Rule>    
</Style>
<Style name="tracks-tunnels">
    <Rule>
     <Filter>[tracktype]='grade1'</Filter>
     <MaxScaleDenominator>50000</MaxScaleDenominator>
     <LineSymbolizer>
        <CssParameter name="stroke">grey</CssParameter>
        <CssParameter name="stroke-width">5</CssParameter>
        <CssParameter name="stroke-dasharray">4,2</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">white</CssParameter>
        <CssParameter name="stroke-width">3.5</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">#6F8F08</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
        <CssParameter name="stroke-opacity">0.5</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
     <Filter>[tracktype]='grade2'</Filter>
     <MaxScaleDenominator>50000</MaxScaleDenominator>
     <LineSymbolizer>
        <CssParameter name="stroke">grey</CssParameter>
        <CssParameter name="stroke-width">4.5</CssParameter>
        <CssParameter name="stroke-dasharray">4,2</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">white</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">#6F8F08</CssParameter>
        <CssParameter name="stroke-width">1.5</CssParameter>
        <CssParameter name="stroke-dasharray">3,4</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
        <CssParameter name="stroke-opacity">0.5</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
     <Filter>[tracktype]='grade3'</Filter>
     <MaxScaleDenominator>50000</MaxScaleDenominator>
     <LineSymbolizer>
        <CssParameter name="stroke">grey</CssParameter>
        <CssParameter name="stroke-width">4.5</CssParameter>
        <CssParameter name="stroke-dasharray">4,2</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">white</CssParameter>
        <CssParameter name="stroke-width">3.5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">#6F8F08</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
        <CssParameter name="stroke-opacity">0.5</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
     <Filter>[tracktype]='grade4'</Filter>
     <MaxScaleDenominator>50000</MaxScaleDenominator>
     <LineSymbolizer>
        <CssParameter name="stroke">grey</CssParameter>
        <CssParameter name="stroke-width">4.5</CssParameter>
        <CssParameter name="stroke-dasharray">4,2</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">white</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">#6F8F08</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
        <CssParameter name="stroke-dasharray">4,7,1,5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
        <CssParameter name="stroke-opacity">0.5</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
     <Filter>[tracktype]='grade5'</Filter>
     <MaxScaleDenominator>50000</MaxScaleDenominator>
     <LineSymbolizer>
        <CssParameter name="stroke">grey</CssParameter>
        <CssParameter name="stroke-width">4.5</CssParameter>
        <CssParameter name="stroke-dasharray">4,2</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">white</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">#6F8F08</CssParameter>
        <CssParameter name="stroke-width">2</CssParameter>
        <CssParameter name="stroke-dasharray">1,5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
        <CssParameter name="stroke-opacity">0.5</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <ElseFilter/>
      <MaxScaleDenominator>50000</MaxScaleDenominator>
     <LineSymbolizer>
        <CssParameter name="stroke">grey</CssParameter>
        <CssParameter name="stroke-width">4.5</CssParameter>
        <CssParameter name="stroke-dasharray">4,2</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">white</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">#6F8F08</CssParameter>
        <CssParameter name="stroke-width">1.5</CssParameter>
        <CssParameter name="stroke-dasharray">3,4</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
        <CssParameter name="stroke-opacity">0.5</CssParameter>
      </LineSymbolizer>
     </Rule>    
</Style>

<Style name="waterway-bridges">
    <Rule>
      <MaxScaleDenominator>50000</MaxScaleDenominator>
      <MinScaleDenominator>5000</MinScaleDenominator>
      <LineSymbolizer>
        <CssParameter name="stroke">#000</CssParameter>
        <CssParameter name="stroke-width">7</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">#B0D3EB</CssParameter>
        <CssParameter name="stroke-width">6</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
      <TextSymbolizer name="name" face_name="DejaVu Sans Book" size="9" fill="#6699cc" halo_radius="1" placement="line"/>
    </Rule>
    <Rule>
      <MaxScaleDenominator>5000</MaxScaleDenominator>
      <MinScaleDenominator>1000</MinScaleDenominator>
      <LineSymbolizer>
        <CssParameter name="stroke">#000</CssParameter>
        <CssParameter name="stroke-width">11</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">#B0D3EB</CssParameter>
        <CssParameter name="stroke-width">10</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
      <TextSymbolizer name="name" face_name="DejaVu Sans Book" size="9" fill="#6699cc" halo_radius="1" placement="line"/>
    </Rule>
</Style>
<Style name="roads">
    <!--  -->
    <!-- level 4-5 -->
    <Rule>
      <Filter>[highway] = 'motorway' or [highway] = 'motorway_link'</Filter>
      <MaxScaleDenominator>25000000</MaxScaleDenominator>
      <MinScaleDenominator>5000000</MinScaleDenominator>
      <LineSymbolizer>
        <CssParameter name="stroke">#8F764F</CssParameter>
        <CssParameter name="stroke-width">0.5</CssParameter>
      </LineSymbolizer>
    </Rule>
    <!-- level 6-8 -->
    <Rule>
      <Filter>[highway] = 'motorway' or [highway] = 'motorway_link'</Filter>
      <MaxScaleDenominator>5000000</MaxScaleDenominator>
      <MinScaleDenominator>200000</MinScaleDenominator>
      <LineSymbolizer>
       <CssParameter name="stroke">#8F764F</CssParameter>
       <CssParameter name="stroke-width">1</CssParameter>
      </LineSymbolizer>
    </Rule>
    <!-- TRUNK -->
    <!--level 4-6-->
    <Rule>
      <Filter>[highway] = 'trunk' or [highway] = 'trunk_link'</Filter>
      <MaxScaleDenominator>25000000</MaxScaleDenominator>
      <MinScaleDenominator>5000000</MinScaleDenominator>
      <LineSymbolizer>
        <CssParameter name="stroke">#EBC994</CssParameter>
        <CssParameter name="stroke-width">0.4</CssParameter>
      </LineSymbolizer>
    </Rule>
    <!-- level 7-9 -->
   <Rule>
      <Filter>[highway] = 'trunk' or [highway] = 'trunk_link'</Filter>
      <MaxScaleDenominator>5000000</MaxScaleDenominator>
      <MinScaleDenominator>20000</MinScaleDenominator>
      <LineSymbolizer>
        <CssParameter name="stroke">#EBC994</CssParameter>
        <CssParameter name="stroke-width">1</CssParameter>
      </LineSymbolizer>
    </Rule>
    <!-- level 10-->
    <Rule>
      <Filter>[highway] = 'trunk' or [highway] = 'trunk_link'</Filter>
      <MaxScaleDenominator>500000</MaxScaleDenominator>
      <MinScaleDenominator>20000</MinScaleDenominator>
      <LineSymbolizer>
        <CssParameter name="stroke">#EBC994</CssParameter>
        <CssParameter name="stroke-width">1</CssParameter>
      </LineSymbolizer>
    </Rule>
   <!-- PRIMARY-->
   <!-- level 5-6-->
   <Rule>
      <Filter>[highway] = 'primary' or [highway] = 'primary_link' or [highway] = 'secondary' or [highway] = 'secondary_link'</Filter>
      <MaxScaleDenominator>5000000</MaxScaleDenominator>
      <MinScaleDenominator>300000</MinScaleDenominator>
      <LineSymbolizer>
        <CssParameter name="stroke">#EBC994</CssParameter>
        <CssParameter name="stroke-width">0.5</CssParameter>
      </LineSymbolizer>
    </Rule>
    
    
</Style>

<Style name="cycle-routes">
    <Rule>
      <Filter>[cycleway] = 'lane' or [cycleway] = 'opposite_lane' or [cycleway] = 'track' or [cycleway] = 'opposite_track' or [cycleway] = 'opposite' and not [highway] = 'cycleway'</Filter>
      <MaxScaleDenominator>200000</MaxScaleDenominator>
      <MinScaleDenominator>20000</MinScaleDenominator>
      <LineSymbolizer>
        <CssParameter name="stroke">#F5E2C5</CssParameter>
        <CssParameter name="stroke-width">1.5</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>[cycleway] = 'lane' or [cycleway] = 'opposite_lane' or [cycleway] = 'track' or [cycleway] = 'opposite_track' or [cycleway] = 'opposite' and not [highway] = 'cycleway'</Filter>
      <MaxScaleDenominator>20000</MaxScaleDenominator>
      <LineSymbolizer>
        <CssParameter name="stroke">#F5E2C5</CssParameter>
        <CssParameter name="stroke-width">4</CssParameter>
      </LineSymbolizer>
    </Rule>
    
    <Rule>
      <Filter>([rcn] = 'yes' or [lcn] = 'yes') and not [highway] = 'cycleway' and not [highway] = 'track' and not [cycleway] = 'lane' and not [cycleway] = 'opposite_lane' and not [cycleway] = 'track' and not [cycleway] = 'opposite_track' and not [cycleway] = 'opposite'</Filter>
      <MaxScaleDenominator>200000</MaxScaleDenominator>
      <LineSymbolizer>
        <CssParameter name="stroke">green</CssParameter>
        <CssParameter name="stroke-width">1</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
        <CssParameter name="stroke-dasharray">2,2</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>([rcn] = 'yes' or [lcn] = 'yes') and not [highway] = 'cycleway' and not [highway] = 'track' and not [cycleway] = 'lane' and not [cycleway] = 'opposite_lane' and not [cycleway] = 'track' and not [cycleway] = 'opposite_track' and not [cycleway] = 'opposite'</Filter>
      <MaxScaleDenominator>700000</MaxScaleDenominator>
      <MinScaleDenominator>200000</MinScaleDenominator>
      <LineSymbolizer>
        <CssParameter name="stroke">green</CssParameter>
        <CssParameter name="stroke-width">.5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
        <CssParameter name="stroke-dasharray">2,2</CssParameter>
      </LineSymbolizer>
    </Rule>
    
    <Rule>
      <Filter>([highway] = 'cycleway' or ([highway] = 'path' and [bicycle] &lt;&gt; 'no')) and not [tunnel] = 'yes'</Filter>
      <MaxScaleDenominator>200000</MaxScaleDenominator>
      <LineSymbolizer>
        <CssParameter name="stroke">#EBC994</CssParameter>
        <CssParameter name="stroke-width">3</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">green</CssParameter>
        <CssParameter name="stroke-width">1</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      <Filter>([highway] = 'cycleway' or ([highway] = 'path' and [bicycle] &lt;&gt; 'no')) and not [tunnel] = 'yes'</Filter>
      <MaxScaleDenominator>700000</MaxScaleDenominator>
      <MinScaleDenominator>200000</MinScaleDenominator>
      <LineSymbolizer>
        <CssParameter name="stroke">#EBC994</CssParameter>
        <CssParameter name="stroke-width">1</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">green</CssParameter>
        <CssParameter name="stroke-width">.5</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule>
    
    <Rule>
      <Filter>[highway] = 'steps'</Filter>
      <MaxScaleDenominator>20000</MaxScaleDenominator>
      <LineSymbolizer>
        <CssParameter name="stroke">#e9b96e</CssParameter>
        <CssParameter name="stroke-width">5.0</CssParameter>
        <CssParameter name="stroke-dasharray">2,1</CssParameter>
      </LineSymbolizer>
    </Rule> 
    
    <Rule>
      <Filter>([highway] = 'footway') and not [tunnel]='yes'</Filter>
      <MaxScaleDenominator>20000</MaxScaleDenominator>
      <LineSymbolizer>
        <CssParameter name="stroke">#fff</CssParameter>
        <CssParameter name="stroke-width">4</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
        <CssParameter name="stroke-opacity">0.4</CssParameter>
      </LineSymbolizer>
      <LineSymbolizer>
        <CssParameter name="stroke">#e9b96e</CssParameter>
        <CssParameter name="stroke-width">1.5</CssParameter>
        <CssParameter name="stroke-dasharray">1,3</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule> 
    
    <Rule>
      <Filter>([highway] = 'footway') and not [tunnel]='yes'</Filter>
      <MaxScaleDenominator>150000</MaxScaleDenominator>
      <MinScaleDenominator>20000</MinScaleDenominator>
      <LineSymbolizer>
        <CssParameter name="stroke">#EBC994</CssParameter>
        <CssParameter name="stroke-width">1</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
      </LineSymbolizer>
    </Rule> 
</Style>

<Style name="no-cycling">      
    <Rule>
			<MaxScaleDenominator>300000</MaxScaleDenominator>
		<LineSymbolizer>
			<CssParameter name="stroke">#880000</CssParameter>
			<CssParameter name="stroke-width">2</CssParameter>
        <CssParameter name="stroke-dasharray">2,2</CssParameter>
		</LineSymbolizer>
    </Rule>
</Style> 
<Style name="roads-text">
    <Rule>
      <Filter>[highway] &lt;&gt; 'residential' and not [highway] = 'cycleway'</Filter>
      <MaxScaleDenominator>25000</MaxScaleDenominator>
      <MinScaleDenominator>5000</MinScaleDenominator>
      <TextSymbolizer name="name" face_name="DejaVu Sans Bold" size="11" fill="#e9b96e" halo_radius="1" placement="line" />
    </Rule>
    <Rule>
      <Filter>[highway] &lt;&gt; 'cycleway'</Filter>
      <MaxScaleDenominator>5000</MaxScaleDenominator>
      <MinScaleDenominator>100</MinScaleDenominator>
      <TextSymbolizer name="name" face_name="DejaVu Sans Book" size="11" fill="#e9b96e" halo_radius="1" placement="line" />
    </Rule>
    <Rule>
      <Filter>[highway] = 'cycleway'</Filter>
      <MaxScaleDenominator>40000</MaxScaleDenominator>
      <MinScaleDenominator>5000</MinScaleDenominator>
      <TextSymbolizer name="name" face_name="DejaVu Sans Book" size="11" fill="green" halo_radius="1" placement="line" />
    </Rule>
    <Rule>
      <Filter>[highway] = 'cycleway'</Filter>
      <MaxScaleDenominator>5000</MaxScaleDenominator>
      <MinScaleDenominator>100</MinScaleDenominator>
      <TextSymbolizer name="name" face_name="DejaVu Sans Book" size="11" fill="green" halo_radius="1" placement="line" />
    </Rule>
</Style>
  
