#include "dank_sprite.h"

dank_sprite::dank_sprite(float xcoord, float ycoord, float width, float height, dank_texture texture) {
	vertices[0].position = dank_vec3(xcoord, ycoord, 0);
	vertices[0].texID = texture.texID;
	vertices[0].UV = dank_vec2(texture.UV.x, texture.UV.y);

	vertices[1].position = dank_vec3(xcoord + width, ycoord, 0);
	vertices[1].texID = texture.texID;
	vertices[1].UV = dank_vec2(texture.UV.x + texture.width, texture.UV.y);

	vertices[2].position = dank_vec3(xcoord + width, ycoord + height, 0);
	vertices[2].texID = texture.texID;
	vertices[2].UV = dank_vec2(texture.UV.x + texture.width, texture.UV.y + texture.height);

	vertices[3].position = dank_vec3(xcoord, ycoord + height, 0);
	vertices[3].texID = texture.texID;
	vertices[3].UV = dank_vec2(texture.UV.x, texture.UV.y + texture.height);

}
dank_sprite::~dank_sprite() {
}
