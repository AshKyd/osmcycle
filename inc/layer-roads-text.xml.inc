<Style name="roads-text">
    <Rule>
      &maxscale_zoom13;
      <Filter>[highway] = 'motorway'</Filter>
      <TextSymbolizer name="name" face_name="DejaVu Sans Book" size="10" fill="black" halo_fill="white" halo_radius="1" spacing="500" placement="line" />
    </Rule>
    <Rule>
      &minscale_zoom13;
      &maxscale_zoom13;
      <Filter>[highway] = 'trunk' or [highway] = 'primary'</Filter>
      <TextSymbolizer name="name" face_name="DejaVu Sans Book" size="8" fill="&color_highwayTextFill;" halo_fill="&color_highwayTextHalo;" halo_radius="1" spacing="500" placement="line" />
    </Rule>
    <Rule>
      &maxscale_zoom14;
      <Filter>[highway] = 'trunk' or [highway] = 'primary'</Filter>
      <TextSymbolizer name="name" face_name="DejaVu Sans Bold" size="10" fill="&color_highwayTextFill;" halo_fill="&color_highwayTextHalo;" halo_radius="1" spacing="500" placement="line" />
    </Rule>
    <Rule>
      &maxscale_zoom14;
      &minscale_zoom15;
      <Filter>[highway] = 'secondary' or [highway] = 'tertiary'</Filter>
      <TextSymbolizer name="name" face_name="DejaVu Sans Book" size="8" fill="&color_highwayTextFill;" halo_fill="&color_highwayTextHalo;" halo_radius="1" spacing="500" placement="line" />
    </Rule>
    <Rule>
      &maxscale_zoom16;
      <Filter>[highway] = 'secondary' or [highway] = 'tertiary'</Filter>
      <TextSymbolizer name="name" face_name="DejaVu Sans Bold" size="8" fill="&color_highwayTextFill;" halo_fill="&color_highwayTextHalo;" halo_radius="1" spacing="500" placement="line" />
    </Rule>
    <Rule>
      &maxscale_zoom16;
      <Filter>[highway] = 'residential'</Filter>
      <TextSymbolizer name="name" fontset_name="book-fonts" size="8" fill="&color_highwayTextFill;" halo_fill="&color_highwayTextHalo;" halo_radius="1" spacing="500" placement="line" />
    </Rule>
</Style>

<Layer name="roads-text" status="on" srs="&osm2pgsql_projection;">
     <StyleName>roads-text</StyleName>
     <Datasource>
      <Parameter name="table">
      (select way,highway,aeroway,name,ref,char_length(ref) as length,
       case when bridge in ('yes','true','1') then 'yes'::text else bridge end as bridge
       from &prefix;_line
       where waterway IS NULL
         and leisure IS NULL
         and landuse IS NULL
         and (name is not null or ref is not null)
      ) as roads
      </Parameter>
      &datasource-settings;
    </Datasource>
</Layer>
