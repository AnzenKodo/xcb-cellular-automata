internal void 
xca_gen_next(I32 *tilemap, I32 width, I32 height) 
{
    for (I32 w = 0; w < width; w++)
    {
        for (I32 h = 0; h < height; h++) 
        {
            I32 alive_count = 0;
            for (I32 k = -1; k <= 1; k++) {
                for (I32 l = -1; l <= 1; l++) {
                    if (k == 0 && l == 0) continue;
                    if (w + k < height && w + k >= 0 && h + l < width && h + l >= 0) {
                        if (tilemap[(w+k)*width+(h+l)] == 1) {
                            alive_count++;
                        }
                    }
                }
            }

            switch (alive_count) {
                case 0:
                case 1: {
                    tilemap[w*width+h] = 0;
                    break;
                }
                case 2:
                case 3: {
                    if (tilemap[w*width+h] == 0 && alive_count == 3) {
                        tilemap[w*width+h] = 1;
                    }
                    break;
                }
                default: {
                    tilemap[w*width+h] = 0;
                    break;
                }
            }
        } // for h
    } // for w

    // I32 tile = tilemap[i*j+width];
}

internal void
xca_draw(){
}
