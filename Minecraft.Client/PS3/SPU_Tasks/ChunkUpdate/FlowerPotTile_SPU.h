#pragma once

#include "Tile_SPU.h"
#include "FlowerPotTileEntity.h"

class FlowerPotTile_SPU : public EntityTile_SPU
{
public:
	FlowerPotTile_SPU(int id) : EntityTile_SPU(id) {}

	void updateDefaultShape()
	{
		float size = 6.0f / 16.0f;
		float half = size / 2;
		setShape(0.5f - half, 0, 0.5f - half, 0.5f + half, size, 0.5f + half);
	}
 	bool isSolidRender(bool isServerLevel = false) { return false; }
	int getRenderShape() { return SHAPE_FLOWER_POT; }
	bool isCubeShaped() { return false; }
	virtual void updateShape(ChunkRebuildData *level, int x, int y, int z, int forceData = -1, TileEntity* forceEntity = nullptr) override
    {
        updateDefaultShape();
        if (forceEntity && forceEntity->GetType() == eTYPE_FLOWERPOTTILEENTITY)
        {
            // later
        }
    }
};