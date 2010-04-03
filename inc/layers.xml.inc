
<Layer name="world" status="on" srs="+proj=merc +a=6378137 +b=6378137 +lat_ts=0.0 +lon_0=0.0 +x_0=0.0 +y_0=0 +k=1.0 +units=m +nadgrids=@null +no_defs +over">
    <StyleName>world</StyleName>
    <Datasource>
      <Parameter name="type">shape</Parameter>
      <Parameter name="file">/home/ash/Misc/Maps/world_boundaries/shoreline_300</Parameter>
    </Datasource>
</Layer>
<Layer name="coast-poly" status="on" srs="+proj=merc +a=6378137 +b=6378137 +lat_ts=0.0 +lon_0=0.0 +x_0=0.0 +y_0=0 +k=1.0 +units=m +nadgrids=@null +no_defs +over">
    <StyleName>coast-poly</StyleName>
    <Datasource>
      <Parameter name="type">shape</Parameter>
      <Parameter name="file">/home/ash/Misc/Maps/world_boundaries/processed_p</Parameter>
    </Datasource>
</Layer>
<Layer name="builtup" status="on" srs="+proj=merc +datum=WGS84 +over">
    <StyleName>builtup</StyleName>
    <Datasource>
      <Parameter name="type">shape</Parameter>
      <Parameter name="file">/home/ash/Misc/Maps/world_boundaries/builtup_area</Parameter>
    </Datasource>
</Layer>


<Layer name="leisure" status="on" srs="+proj=merc +a=6378137 +b=6378137 +lat_ts=0.0 +lon_0=0.0 +x_0=0.0 +y_0=0 +k=1.0 +units=m +nadgrids=@null +no_defs +over">
    <StyleName>leisure</StyleName>
    <Datasource>
		&datasource-settings;

      <Parameter name="table">
      (select way,aeroway,amenity,landuse,leisure,man_made,military,"natural",power,tourism,name
       from planet_osm_polygon
       where landuse is not null
          or leisure is not null
          or aeroway in ('apron','aerodrome')
          or man_made='pier'
          or amenity in ('parking','university','college','school','hospital','grave_yard')
          or military in ('barracks','danger_area')
          or "natural" in ('field','beach','glacier','heath','mud','wood','wetland')
          or power in ('station','sub_station')
          or tourism in ('attraction','camp_site','caravan_site','picnic_site','zoo')
       order by z_order,way_area desc
      ) as leisure
      </Parameter>
    </Datasource>
</Layer>
<Layer name="srtm_10" status="on" srs="+proj=latlong +datum=WGS84">
        <StyleName>contours10</StyleName>
        <StyleName>contours-text10</StyleName>
        <Datasource>
			&datasource-settings;
                <Parameter name="table">(select way,height from contours WHERE height::integer % 10 = 0 AND height::integer % 50 != 0 AND height::integer % 100 != 0) as "contours-10"</Parameter>
        </Datasource>
</Layer>
<Layer name="srtm_50" status="on" srs="+proj=latlong +datum=WGS84">
        <StyleName>contours50</StyleName>
        <StyleName>contours-text50</StyleName>
        <Datasource>
			&datasource-settings;
                <Parameter name="table">(select way,height from contours WHERE height::integer % 50 = 0 AND height::integer % 100 != 0) as "contours-50"</Parameter>
        </Datasource>
</Layer>
<Layer name="srtm_100" status="on" srs="+proj=latlong +datum=WGS84">
        <StyleName>contours100</StyleName>
        <StyleName>contours-text100</StyleName>
        <Datasource>
			&datasource-settings;
                <Parameter name="table">(select way,height from contours WHERE height::integer % 100 = 0) as "contours-100"</Parameter>
        </Datasource>
</Layer>

<Layer name="sports_grounds" status="on" srs="+proj=merc +a=6378137 +b=6378137 +lat_ts=0.0 +lon_0=0.0 +x_0=0.0 +y_0=0 +k=1.0 +units=m +nadgrids=@null +no_defs +over">
    <StyleName>sports_grounds</StyleName>
    <Datasource>
		&datasource-settings;

      <Parameter name="table">(select way,leisure from planet_osm_polygon where leisure in ('sports_centre','stadium') order by z_order,way_area desc) as sports_grounds</Parameter>
    </Datasource>
</Layer>
<Layer name="water_areas" status="on" srs="+proj=merc +a=6378137 +b=6378137 +lat_ts=0.0 +lon_0=0.0 +x_0=0.0 +y_0=0 +k=1.0 +units=m +nadgrids=@null +no_defs +over">
    <StyleName>water_areas</StyleName>
    <Datasource>
		&datasource-settings;
      <Parameter name="table">(select way,"natural",waterway,landuse,name from planet_osm_polygon where waterway in ('dock','mill_pond','riverbank','canal') or landuse in ('reservoir','water') or "natural" in ('lake','water','land','marsh','scrub','wetland','glacier') order by z_order,way_area desc) as water_areas</Parameter>
    </Datasource>
</Layer>
<Layer name="water_lines" status="on" srs="+proj=merc +a=6378137 +b=6378137 +lat_ts=0.0 +lon_0=0.0 +x_0=0.0 +y_0=0 +k=1.0 +units=m +nadgrids=@null +no_defs +over">
    <StyleName>water_lines</StyleName>
    <StyleName>dam</StyleName>
    <Datasource>
		&datasource-settings;
      <Parameter name="table">(select way,waterway,disused,name,case when tunnel in ('yes','true','1') then 'yes'::text else tunnel end as tunnel from planet_osm_line where waterway IS NOT NULL order by z_order) as water_lines</Parameter>
    </Datasource>
</Layer>
<Layer name="land features" status="on" srs="+proj=merc +a=6378137 +b=6378137 +lat_ts=0.0 +lon_0=0.0 +x_0=0.0 +y_0=0 +k=1.0 +units=m +nadgrids=@null +no_defs +over">
     <StyleName>piers</StyleName>
     <Datasource>
		&datasource-settings;

      <Parameter name="table">
      (select way from planet_osm_line where man_made='pier') as piers
      </Parameter>
    </Datasource>
</Layer>
<Layer name="tunnels" status="on" srs="+proj=merc +a=6378137 +b=6378137 +lat_ts=0.0 +lon_0=0.0 +x_0=0.0 +y_0=0 +k=1.0 +units=m +nadgrids=@null +no_defs +over">
    <StyleName>tunnels-casing</StyleName>
    <StyleName>tunnels-fill</StyleName>
    <Datasource>
		&datasource-settings;

      <Parameter name="table">
      (select way,highway from planet_osm_line where highway in ('motorway','motorway_link','trunk','trunk_link','primary','primary_link','secondary','secondary_link','tertiary','residential','unclassified','minor') and tunnel in ('yes','true','1') order by z_order) as roads
      </Parameter>
    </Datasource>
</Layer>
<Layer name="citywalls" status="on" srs="+proj=merc +a=6378137 +b=6378137 +lat_ts=0.0 +lon_0=0.0 +x_0=0.0 +y_0=0 +k=1.0 +units=m +nadgrids=@null +no_defs +over">
    <StyleName>citywalls</StyleName>
    <Datasource>
		&datasource-settings;
      <Parameter name="table">(select way from planet_osm_line where "historic"='citywalls') as citywalls</Parameter>
    </Datasource>
</Layer>
<Layer name="turning_circle" status="on" srs="+proj=merc +a=6378137 +b=6378137 +lat_ts=0.0 +lon_0=0.0 +x_0=0.0 +y_0=0 +k=1.0 +units=m +nadgrids=@null +no_defs +over">
    <StyleName>turning_circle</StyleName>    
    <Datasource>
		&datasource-settings;

      <Parameter name="table">(select way from planet_osm_point where highway='turning_circle') as turning_circle</Parameter>
    </Datasource>
</Layer>
<Layer name="footbikecycle-tunnels" status="on" srs="+proj=merc +a=6378137 +b=6378137 +lat_ts=0.0 +lon_0=0.0 +x_0=0.0 +y_0=0 +k=1.0 +units=m +nadgrids=@null +no_defs +over">
    <StyleName>footbikecycle-tunnels</StyleName>
    <Datasource>
		&datasource-settings;

      <Parameter name="table">
      (select way,highway,horse,foot,bicycle from planet_osm_line where highway in ('bridleway','footway','cycleway','path') and tunnel in ('yes','true','1') order by z_order) as roads
      </Parameter>
    </Datasource>
</Layer>
<Layer name="tracks-notunnel-nobridge" status="on" srs="+proj=merc +a=6378137 +b=6378137 +lat_ts=0.0 +lon_0=0.0 +x_0=0.0 +y_0=0 +k=1.0 +units=m +nadgrids=@null +no_defs +over">
    <StyleName>tracks-notunnel-nobridge</StyleName>
    <Datasource>
		&datasource-settings;

      <Parameter name="table">
      (select way,tracktype from planet_osm_line where highway='track' and bicycle = 'yes' and (bridge is null or bridge in ('no','false','0')) and (tunnel is null or tunnel in ('no','false','0'))) as tracks
      </Parameter>
    </Datasource>
</Layer>
<Layer name="tracks-tunnels" status="on" srs="+proj=merc +a=6378137 +b=6378137 +lat_ts=0.0 +lon_0=0.0 +x_0=0.0 +y_0=0 +k=1.0 +units=m +nadgrids=@null +no_defs +over">
    <StyleName>tracks-tunnels</StyleName>
    <Datasource>
		&datasource-settings;

      <Parameter name="table">
      (select way,tracktype from planet_osm_line where highway='track' and bicycle = 'yes' and tunnel in ('yes','true','1')) as tracks
      </Parameter>
    </Datasource>
</Layer>
<Layer name="buildings" status="on" srs="+proj=merc +a=6378137 +b=6378137 +lat_ts=0.0 +lon_0=0.0 +x_0=0.0 +y_0=0 +k=1.0 +units=m +nadgrids=@null +no_defs +over">
    <StyleName>buildings</StyleName>
    <Datasource>
		&datasource-settings;

      <Parameter name="table">
      (select way,building,leisure,railway,amenity,aeroway from planet_osm_polygon
       where building is not null
          or leisure in ('pitch','track')
          or railway='station'
          or amenity='place_of_worship'
          or aeroway='terminal'
       order by z_order,way_area desc) as buildings
      </Parameter>
    </Datasource>
</Layer>
<Layer name="line features" status="on" srs="+proj=merc +a=6378137 +b=6378137 +lat_ts=0.0 +lon_0=0.0 +x_0=0.0 +y_0=0 +k=1.0 +units=m +nadgrids=@null +no_defs +over">
     <StyleName>cliffs</StyleName>
     <StyleName>barriers</StyleName>
     <Datasource>
		&datasource-settings;

      <Parameter name="table">
      (select way,barrier,"natural",man_made from planet_osm_line where barrier is not null or "natural" in ('hedge','cliff') or man_made='embankment') as roads
      </Parameter>
    </Datasource>
</Layer>
<Layer name="polygon barriers" status="on" srs="+proj=merc +a=6378137 +b=6378137 +lat_ts=0.0 +lon_0=0.0 +x_0=0.0 +y_0=0 +k=1.0 +units=m +nadgrids=@null +no_defs +over">
      <StyleName>barriers</StyleName>
      <Datasource>
		&datasource-settings;
       <Parameter name="table">
       (select way,barrier,"natural" from planet_osm_polygon where barrier is not null or "natural"='hedge') as barriers
       </Parameter>
     </Datasource>
</Layer>
<Layer name="highway-area-casing" status="on" srs="+proj=merc +a=6378137 +b=6378137 +lat_ts=0.0 +lon_0=0.0 +x_0=0.0 +y_0=0 +k=1.0 +units=m +nadgrids=@null +no_defs +over">
    <StyleName>highway-area-casing</StyleName>
    <Datasource>
		&datasource-settings;

      <Parameter name="table">
      (select way,highway from planet_osm_polygon
       where highway in ('residential','unclassified','pedestrian','service','footway','track')
       order by z_order,way_area desc) as roads
      </Parameter>
    </Datasource>
</Layer>
<Layer name="minor-roads-casing" status="on" srs="+proj=merc +a=6378137 +b=6378137 +lat_ts=0.0 +lon_0=0.0 +x_0=0.0 +y_0=0 +k=1.0 +units=m +nadgrids=@null +no_defs +over">
    <StyleName>minor-roads-casing-links</StyleName>
    <StyleName>minor-roads-casing</StyleName>
    <Datasource>
		&datasource-settings;

      <Parameter name="table">
      (select way,highway,service,
       case when tunnel in ('yes','true','1') then 'yes'::text else tunnel end as tunnel
       from planet_osm_line
       where highway in ('motorway','motorway_link','trunk','trunk_link','primary','primary_link','secondary','secondary_link','tertiary','residential','unclassified','minor','road','service','pedestrian','raceway')
       order by z_order) as roads
      </Parameter>
    </Datasource>
</Layer>
<Layer name="highway-area-fill" status="on" srs="+proj=merc +a=6378137 +b=6378137 +lat_ts=0.0 +lon_0=0.0 +x_0=0.0 +y_0=0 +k=1.0 +units=m +nadgrids=@null +no_defs +over">
    <StyleName>highway-area-fill</StyleName>
    <Datasource>
		&datasource-settings;

      <Parameter name="table">
      (select way,highway from planet_osm_polygon
       where highway in ('residential','unclassified','pedestrian','service','footway','living_street','track')
       order by z_order,way_area desc) as roads
      </Parameter>
    </Datasource>
</Layer>
<Layer name="minor-roads-fill" status="on" srs="+proj=merc +a=6378137 +b=6378137 +lat_ts=0.0 +lon_0=0.0 +x_0=0.0 +y_0=0 +k=1.0 +units=m +nadgrids=@null +no_defs +over">
    <StyleName>minor-roads-fill-links</StyleName>
    <StyleName>minor-roads-fill</StyleName>
    <StyleName>cycle-routes-border</StyleName>
    <StyleName>cycle-routes</StyleName>
    <StyleName>railway-background</StyleName>
    <StyleName>railway-foreground</StyleName>
    <Datasource>
		&datasource-settings;

      <Parameter name="table">
      (select way,highway,horse,bicycle,foot,construction,railway,aeroway,service,cycleway,rcn,lcn,
       case when tunnel in ('yes','true','1') then 'yes'::text else tunnel end as tunnel,
       case when bridge in ('yes','true','1') then 'yes'::text else bridge end as bridge
       from planet_osm_line
       where highway is not null
          or aeroway in ('runway','taxiway')
          or railway in ('rail','platform')
          and service is null
       order by z_order) as roads
      </Parameter>
    </Datasource>
</Layer>
<Layer name="no-cycling" status="on" srs="+proj=merc +a=6378137 +b=6378137 +lat_ts=0.0 +lon_0=0.0 +x_0=0.0 +y_0=0 +k=1.0 +units=m +nadgrids=@null +no_defs +over">
    <StyleName>no-cycling</StyleName>
    <Datasource>
		&datasource-settings;

      <Parameter name="table">
      (select way,highway
       from planet_osm_line
       where bicycle='no'
       and highway in ('primary','secondary','tertiary','residential','road','unclassified')) as roads
      </Parameter>
    </Datasource>
</Layer>
<Layer name="ferry-routes" status="on" srs="+proj=merc +a=6378137 +b=6378137 +lat_ts=0.0 +lon_0=0.0 +x_0=0.0 +y_0=0 +k=1.0 +units=m +nadgrids=@null +no_defs +over">
    <StyleName>ferry-routes</StyleName>
    <Datasource>
		&datasource-settings;

      <Parameter name="table">
      (select way from planet_osm_line where route='ferry' ) as routes
      </Parameter>
    </Datasource>
</Layer>
<Layer name="aerialways" status="on" srs="+proj=merc +a=6378137 +b=6378137 +lat_ts=0.0 +lon_0=0.0 +x_0=0.0 +y_0=0 +k=1.0 +units=m +nadgrids=@null +no_defs +over">
    <StyleName>aerialways</StyleName>
    <Datasource>
		&datasource-settings;

      <Parameter name="table">
      (select way,aerialway from planet_osm_line where aerialway is not null) as aerialways
      </Parameter>
    </Datasource>
</Layer>
<Layer name="roads" status="on" srs="+proj=merc +a=6378137 +b=6378137 +lat_ts=0.0 +lon_0=0.0 +x_0=0.0 +y_0=0 +k=1.0 +units=m +nadgrids=@null +no_defs +over">
    <!--StyleName>roads-casing</StyleName-->
    <StyleName>roads</StyleName>
    <Datasource>
		&datasource-settings;

      <Parameter name="table">
      (select way,highway,railway,
       case when tunnel in ('yes','true','1') then 'yes'::text else tunnel end as tunnel
       from planet_osm_roads
       where highway is not null
          or railway is not null
       order by z_order
      ) as roads
      </Parameter>
    </Datasource>
</Layer>
<Layer name="waterway-bridges" status="on" srs="+proj=merc +a=6378137 +b=6378137 +lat_ts=0.0 +lon_0=0.0 +x_0=0.0 +y_0=0 +k=1.0 +units=m +nadgrids=@null +no_defs +over">
    <StyleName>waterway-bridges</StyleName>
    <Datasource>
		&datasource-settings;
      <Parameter name="table">(select way,name from planet_osm_line where waterway='canal' and bridge in ('yes','true','1','aqueduct') order by z_order) as water</Parameter>
    </Datasource>
</Layer>
<Layer name="bridges" status="on" srs="+proj=merc +a=6378137 +b=6378137 +lat_ts=0.0 +lon_0=0.0 +x_0=0.0 +y_0=0 +k=1.0 +units=m +nadgrids=@null +no_defs +over">
    <StyleName>road-bridges-casing</StyleName>
    <StyleName>road-bridges-fill</StyleName>
    <StyleName>noncased-ways-bridges</StyleName>
    <StyleName>primarybridge_layer0_casing</StyleName>
    <StyleName>mwaybridge_layer0_casing</StyleName>
    <StyleName>primarybridge_layer0_fill</StyleName>
    <StyleName>mwaybridge_layer0_fill</StyleName>
    <StyleName>primarybridge_layer1_casing</StyleName>
    <StyleName>mwaybridge_layer1_casing</StyleName>
    <StyleName>primarybridge_layer1_fill</StyleName>
    <StyleName>mwaybridge_layer1_fill</StyleName>
    <StyleName>primarybridge_layer2_casing</StyleName>
    <StyleName>mwaybridge_layer2_casing</StyleName>
    <StyleName>primarybridge_layer2_fill</StyleName>
    <StyleName>mwaybridge_layer2_fill</StyleName>
    <StyleName>mwaybridge_layer3_casing</StyleName>
    <StyleName>mwaybridge_layer3_fill</StyleName>
    <StyleName>mwaybridge_layer4_casing</StyleName>
    <StyleName>mwaybridge_layer4_fill</StyleName>
    <StyleName>mwaybridge_layer5_casing</StyleName>
    <StyleName>mwaybridge_layer5_fill</StyleName>
    <Datasource>
		&datasource-settings;

      <Parameter name="table">
      (select way,highway,aeroway,railway,layer,horse,bicycle,foot,bridge
       from planet_osm_line
       where (highway is not null
              or aeroway in ('runway','taxiway')
              or railway in ('light_rail','subway'))
         and bridge not in ('no','false','0')
       order by z_order
      ) as roads
      </Parameter>
    </Datasource>
</Layer>
<Layer name="tracks-bridges" status="on" srs="+proj=merc +a=6378137 +b=6378137 +lat_ts=0.0 +lon_0=0.0 +x_0=0.0 +y_0=0 +k=1.0 +units=m +nadgrids=@null +no_defs +over">
    <StyleName>tracks-bridges</StyleName>
    <Datasource>
		&datasource-settings;

      <Parameter name="table">
      (select way,tracktype from planet_osm_line where highway='track' and bicycle = 'yes' and bridge in ('yes','true','1')) as tracks
      </Parameter>
    </Datasource>
</Layer>
<Layer name="access" status="on" srs="+proj=merc +a=6378137 +b=6378137 +lat_ts=0.0 +lon_0=0.0 +x_0=0.0 +y_0=0 +k=1.0 +units=m +nadgrids=@null +no_defs +over">
    <StyleName>access</StyleName>
    <Datasource>
		&datasource-settings;

      <Parameter name="table">
      (select way,access,highway from planet_osm_line where access is not null) as access
      </Parameter>
    </Datasource>
</Layer>
<Layer name="trams" status="on" srs="+proj=merc +a=6378137 +b=6378137 +lat_ts=0.0 +lon_0=0.0 +x_0=0.0 +y_0=0 +k=1.0 +units=m +nadgrids=@null +no_defs +over">
    <StyleName>trams</StyleName>
    <Datasource>
		&datasource-settings;

      <Parameter name="table">
      (select way from planet_osm_line where railway='tram' and (tunnel is null or tunnel not in ('yes','true','1'))) as trams
      </Parameter>
    </Datasource>
</Layer>
<Layer name="placenames" status="on" srs="+proj=merc +a=6378137 +b=6378137 +lat_ts=0.0 +lon_0=0.0 +x_0=0.0 +y_0=0 +k=1.0 +units=m +nadgrids=@null +no_defs +over">
    <StyleName>country</StyleName>
    <StyleName>state</StyleName>
    <StyleName>capital</StyleName> 
    <StyleName>city</StyleName> 
    <StyleName>town</StyleName>    
    <StyleName>suburb</StyleName>
    <StyleName>village</StyleName>
    <StyleName>hamlet</StyleName>
    <Datasource>
		&datasource-settings;

      <Parameter name="table">(select way,place,capital,name,ref from planet_osm_point where place is not null) as placenames</Parameter>
    </Datasource>
</Layer>
<Layer name="amenity" status="on" srs="+proj=merc +a=6378137 +b=6378137 +lat_ts=0.0 +lon_0=0.0 +x_0=0.0 +y_0=0 +k=1.0 +units=m +nadgrids=@null +no_defs +over">
    <StyleName>stations</StyleName>    
    <StyleName>symbols</StyleName>
    <StyleName>points</StyleName>
    <Datasource>
		&datasource-settings;

      <Parameter name="table">(select * from planet_osm_point where barrier IS NOT NULL or amenity IS NOT NULL or tourism is NOT NULL or railway is NOT NULL or "natural" is NOT NULL or highway is NOT NULL or aeroway is NOT NULL or aerialway is NOT NULL or power_source is NOT NULL or man_made is NOT NULL) as amenity</Parameter>
    </Datasource>
</Layer>
<Layer name="amenity-poly" status="on" srs="+proj=merc +a=6378137 +b=6378137 +lat_ts=0.0 +lon_0=0.0 +x_0=0.0 +y_0=0 +k=1.0 +units=m +nadgrids=@null +no_defs +over">
    <StyleName>stations</StyleName>
    <StyleName>symbols</StyleName>
    <StyleName>points</StyleName>
    <Datasource>
		&datasource-settings;

      <Parameter name="table">(select * from planet_osm_polygon where barrier IS NOT NULL or amenity IS NOT NULL or tourism is NOT NULL or railway is NOT NULL or "natural" is NOT NULL or highway is NOT NULL or aeroway is NOT NULL or aerialway is NOT NULL or power_source is NOT NULL or man_made is NOT NULL) as amenity</Parameter>
    </Datasource>
</Layer>
<Layer name="power" status="on" srs="+proj=merc +a=6378137 +b=6378137 +lat_ts=0.0 +lon_0=0.0 +x_0=0.0 +y_0=0 +k=1.0 +units=m +nadgrids=@null +no_defs +over">
    <StyleName>power</StyleName>
    <Datasource>
		&datasource-settings;
      <Parameter name="table">(select way from planet_osm_line where "power"='line') as power</Parameter>
    </Datasource>
</Layer>
<Layer name="power_towers" status="on" srs="+proj=merc +a=6378137 +b=6378137 +lat_ts=0.0 +lon_0=0.0 +x_0=0.0 +y_0=0 +k=1.0 +units=m +nadgrids=@null +no_defs +over">
     <StyleName>power_towers</StyleName>
    <Datasource>
		&datasource-settings;

      <Parameter name="table">(select way from planet_osm_point where power='tower') as power_towers</Parameter>
    </Datasource>
</Layer>  
<Layer name="directions" status="on" srs="+proj=merc +a=6378137 +b=6378137 +lat_ts=0.0 +lon_0=0.0 +x_0=0.0 +y_0=0 +k=1.0 +units=m +nadgrids=@null +no_defs +over">
     <StyleName>directions</StyleName>
     <Datasource>
		&datasource-settings;

      <Parameter name="table">
      (select way,case when oneway in ('yes','true','1') then 'yes'::text else oneway end as oneway from planet_osm_line where oneway is not null) as directions
      </Parameter>
    </Datasource>
</Layer>
<Layer name="planet roads text osm low zoom" status="on" srs="+proj=merc +a=6378137 +b=6378137 +lat_ts=0.0 +lon_0=0.0 +x_0=0.0 +y_0=0 +k=1.0 +units=m +nadgrids=@null +no_defs +over">
     <StyleName>roads-text-low-zoom</StyleName>
     <Datasource>
		&datasource-settings;

      <Parameter name="table">
      (select way,highway,ref,char_length(ref) as length
       from planet_osm_roads
       where highway in ('motorway','trunk','primary')
         and ref is not null
      ) as roads
      </Parameter>
    </Datasource>
</Layer>
<Layer name="planet roads text osm" status="on" srs="+proj=merc +a=6378137 +b=6378137 +lat_ts=0.0 +lon_0=0.0 +x_0=0.0 +y_0=0 +k=1.0 +units=m +nadgrids=@null +no_defs +over">
     <StyleName>roads-text</StyleName>
     <Datasource>
		&datasource-settings;

      <Parameter name="table">
      (select way,highway,aeroway,name,ref,char_length(ref) as length,
       case when bridge in ('yes','true','1') then 'yes'::text else bridge end as bridge
       from planet_osm_line
       where waterway IS NULL
         and leisure IS NULL
         and landuse IS NULL
         and highway!='construction'
         and (name is not null or ref is not null)
      ) as roads
      </Parameter>
    </Datasource>
</Layer>
<Layer name="text" status="on" srs="+proj=merc +a=6378137 +b=6378137 +lat_ts=0.0 +lon_0=0.0 +x_0=0.0 +y_0=0 +k=1.0 +units=m +nadgrids=@null +no_defs +over">
    <StyleName>text</StyleName>
    <Datasource>
		&datasource-settings;

      <Parameter name="table">
      (select way,amenity,highway,leisure,landuse,man_made,"natural",place,tourism,ele,name,ref,military,aeroway,'yes'::text as point
       from planet_osm_point
       where amenity is not null
          or leisure is not null
          or landuse is not null
          or tourism is not null
          or "natural" is not null
          or man_made='lighthouse'
          or place='island'
          or highway='motorway_junction'
          or military='danger_area'
          or aeroway='gate'
      ) as text
      </Parameter>
    </Datasource>
</Layer>
<Layer name="text-poly" status="on" srs="+proj=merc +a=6378137 +b=6378137 +lat_ts=0.0 +lon_0=0.0 +x_0=0.0 +y_0=0 +k=1.0 +units=m +nadgrids=@null +no_defs +over">
    <StyleName>text</StyleName>
    <Datasource>
		&datasource-settings;

      <Parameter name="table">
      (select way,aeroway,amenity,highway,leisure,landuse,man_made,"natural",place,tourism,NULL as ele,name,ref,military,'no'::text as point
       from planet_osm_polygon
       where amenity is not null
          or leisure is not null
          or landuse is not null
          or tourism is not null
          or "natural" is not null
          or man_made='lighthouse'
          or place='island'
          or military='danger_area'
      ) as text
      </Parameter>
    </Datasource>
</Layer>
<Layer name="area-text" status="on" srs="+proj=merc +a=6378137 +b=6378137 +lat_ts=0.0 +lon_0=0.0 +x_0=0.0 +y_0=0 +k=1.0 +units=m +nadgrids=@null +no_defs +over">
    <StyleName>area-text</StyleName>
    <Datasource>
		&datasource-settings;

      <Parameter name="table">
      (select way,way_area,name
       from planet_osm_polygon
       where name is not null
         and (waterway is null or waterway &lt;&gt; 'riverbank')
       order by z_order,way_area desc
      ) as text
      </Parameter>
    </Datasource>
</Layer>
<Layer name="interpolation_lines" status="on" srs="+proj=merc +a=6378137 +b=6378137 +lat_ts=0.0 +lon_0=0.0 +x_0=0.0 +y_0=0 +k=1.0 +units=m +nadgrids=@null +no_defs +over">
     <StyleName>interpolation</StyleName>
     <Datasource>
		&datasource-settings;

      <Parameter name="table">
       (select way from planet_osm_line where "addr:interpolation" is not null) as interpolation
      </Parameter>
    </Datasource>
</Layer>
<Layer name="housenumb_ways" status="on" srs="+proj=merc +a=6378137 +b=6378137 +lat_ts=0.0 +lon_0=0.0 +x_0=0.0 +y_0=0 +k=1.0 +units=m +nadgrids=@null +no_defs +over">
    <StyleName>way_numbers</StyleName>
    <Datasource>
		&datasource-settings;

      <Parameter name="table">(select way,"addr:housenumber" from planet_osm_polygon where "addr:housenumber" is not null and building is not null) as way_numbers</Parameter>
    </Datasource>
</Layer>
<Layer name="housenumb_nodes" status="on" srs="+proj=merc +a=6378137 +b=6378137 +lat_ts=0.0 +lon_0=0.0 +x_0=0.0 +y_0=0 +k=1.0 +units=m +nadgrids=@null +no_defs +over">
    <StyleName>node_numbers</StyleName>
    <Datasource>
		&datasource-settings;

      <Parameter name="table">(select way,"addr:housenumber" from planet_osm_point where "addr:housenumber" is not null) as node_numbers</Parameter>
    </Datasource>
</Layer>
<Layer name="misc_boundaries" status="on" srs="+proj=merc +a=6378137 +b=6378137 +lat_ts=0.0 +lon_0=0.0 +x_0=0.0 +y_0=0 +k=1.0 +units=m +nadgrids=@null +no_defs +over">
    <StyleName>boundary</StyleName>
    <Datasource>
		&datasource-settings;

      <Parameter name="table">
      (select way,name from planet_osm_polygon where boundary='national_park') as boundary
      </Parameter>
    </Datasource>
</Layer>
<Layer name="admin" status="on" srs="+proj=merc +a=6378137 +b=6378137 +lat_ts=0.0 +lon_0=0.0 +x_0=0.0 +y_0=0 +k=1.0 +units=m +nadgrids=@null +no_defs +over">
    <StyleName>admin</StyleName>
    <Datasource>
		&datasource-settings;

      <Parameter name="table">
      (select way,admin_level from planet_osm_roads where "boundary"='administrative') as admin</Parameter>
    </Datasource>
</Layer>
