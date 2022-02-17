#ifndef TERRAIN_PALETTE_CLASS_H
#define TERRAIN_PALETTE_CLASS_H

// We don't need windows.h in this plugin but many others do and it throws up on itself all the time
// So best to include it and make sure CI warns us when we use something Microsoft took for their own goals....
#ifdef WIN32
#include <windows.h>
#endif

#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/viewport.hpp>

#include <godot_cpp/core/binder_common.hpp>
#include "terrain_data.h"

using namespace godot;


class TerrainPaletteRef : public RefCounted {
GDCLASS(TerrainPaletteRef, RefCounted);

protected:
    static void _bind_methods() {}

public:
    TerrainPaletteRef();
    ~TerrainPaletteRef();
};


class TerrainPalette : public Resource {
	GDCLASS(TerrainPalette, Resource);

protected:
	static void _bind_methods();

private:

public:
    TerrainPalette();
    ~TerrainPalette();

	// Constants.

	// Functions.

	// Property.
};

#endif
