<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
<xsl:param name="current-date" select="Unknown" />
<xsl:template match="/">
<kml xmlns="http://www.opengis.net/kml/2.2">
	<Document>
		<name>CityCycle Stations</name>
		<open>1</open>
		<description>A list of Brisbane CityCycle stations as appears on http://www.citycycle.com.au/All-Stations/Station-Map. Last updated: <xsl:value-of select="$current-date"/>.</description>
		<Style id="cc">
			<IconStyle>
				<Icon><href>http://briscycle.com/themes/briscycle/images/icons/citycycle.png</href></Icon>
			</IconStyle>
		</Style>
		<Folder>
			<name>CityCycle Stations</name>
			<visibility>1</visibility>
			<description>Station List.</description>
			<xsl:for-each select="carto/markers/marker">
			<xsl:if test="@open='1'">
			<Placemark>
				<name>Station <xsl:value-of select="@number"/></name>
				<description><xsl:value-of select="@fullAddress"/></description>
				<styleUrl>#cc</styleUrl>
				<Point>
					<coordinates><xsl:value-of select="@lng"/>,<xsl:value-of select="@lat"/></coordinates>
				</Point>
			</Placemark>
			</xsl:if>
      </xsl:for-each>
		</Folder>
	</Document>
</kml>
</xsl:template>
</xsl:stylesheet>

