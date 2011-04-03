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

<Style name="cycle-text">
    <Rule>
      &minscale_zoom13;
      &maxscale_zoom13;
      <Filter>[highway] = 'trunk' or [highway] = 'primary'</Filter>
      <TextSymbolizer name="name" face_name="DejaVu Sans Book" size="8" fill="&color_cyclewayTextFill;" halo_fill="&color_cyclewayTextHalo;" halo_radius="2" spacing="500" placement="line" />
    </Rule>
    <Rule>
      &maxscale_zoom14;
      <Filter>[highway] = 'trunk' or [highway] = 'primary'</Filter>
      <TextSymbolizer name="name" face_name="DejaVu Sans Bold" size="10" fill="&color_cyclewayTextFill;" halo_fill="&color_cyclewayTextHalo;" halo_radius="2" spacing="500" placement="line" />
    </Rule>
    <Rule>
      &maxscale_zoom14;
      &minscale_zoom15;
      <Filter>[highway] = 'secondary' or [highway] = 'tertiary'</Filter>
      <TextSymbolizer name="name" face_name="DejaVu Sans Book" size="8" fill="&color_cyclewayTextFill;" halo_fill="&color_cyclewayTextHalo;" halo_radius="2" spacing="500" placement="line" />
    </Rule>
    <Rule>
      &maxscale_zoom16;
      <Filter>[highway] = 'secondary' or [highway] = 'tertiary'</Filter>
      <TextSymbolizer name="name" face_name="DejaVu Sans Bold" size="8" fill="&color_cyclewayTextFill;" halo_fill="&color_cyclewayTextHalo;" halo_radius="2" spacing="500" placement="line" />
    </Rule>
    <Rule>
      &maxscale_zoom16;
      <Filter>[highway] = 'residential'</Filter>
      <TextSymbolizer name="name" fontset_name="book-fonts" size="8" fill="&color_cyclewayTextFill;" halo_fill="&color_cyclewayTextHalo;" halo_radius="2" spacing="500" placement="line" />
    </Rule>
    <Rule>
      &maxscale_zoom14;
      <Filter>[highway] = 'path' or [highway] = 'cycleway' or [highway] = 'track'</Filter>
      <TextSymbolizer name="name" fontset_name="book-fonts" size="8" fill="&color_cyclewayTextFill;" halo_fill="&color_cyclewayTextHalo;" halo_radius="2" spacing="500" placement="line" max_char_angle_delta="30" />
    </Rule>
</Style>

<Layer name="roads-text" status="on" srs="&osm2pgsql_projection;">
<StyleName>roads-text</StyleName>
<Datasource>
	<Parameter name="table">
(
select way,highway,aeroway,name,ref,char_length(ref) as length,
case when bridge in ('yes','true','1') then 'yes'::text else bridge end as bridge
from &prefix;_line
where waterway IS NULL
and (
(
cycleway is null or cycleway not in ('lane', 'track', 'opposite_lane', 'opposite_lane','opposite_track','left','right')
)
and (lcn != 'yes')
and (rcn != 'yes')
)
and leisure IS NULL
and landuse IS NULL
and (name is not null or ref is not null)
) as roads
	</Parameter>
	&datasource-settings;
</Datasource>
</Layer>

<Layer name="cycle-text" status="on" srs="&osm2pgsql_projection;">
	<StyleName>cycle-text</StyleName>
	<Datasource>
		<Parameter name="table">
(
select way,highway,name,ref,char_length(ref) as length
from &prefix;_line
where
(
(
cycleway is not null and cycleway in ('lane', 'track', 'opposite_lane', 'opposite_lane','opposite_track','left','right')
)
OR (highway = 'path' and bicycle = 'yes')
OR (highway = 'track' and bicycle = 'yes')
OR (lcn = 'yes')
OR (rcn = 'yes')
)
and (name is not null or ref is not null)
) as roads
		</Parameter>
		&datasource-settings;
	</Datasource>
</Layer>
