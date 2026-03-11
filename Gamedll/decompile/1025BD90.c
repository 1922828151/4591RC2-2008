/*
 * func-name: sub_1025BD90
 * func-address: 0x1025bd90
 * callers: 0x1000d61b
 * callees: 0x10018c87
 */

void __thiscall sub_1025BD90(int this, int a2, float a3)
{
  _DWORD *v4; // ebx
  int v5; // esi
  int v6; // ebp
  double v7; // st7
  struct RETextureNode *Texture; // eax
  double v9; // st6
  float v10; // [esp+18h] [ebp-10h]
  float v11; // [esp+1Ch] [ebp-Ch]
  float v12; // [esp+20h] [ebp-8h]
  float v13; // [esp+24h] [ebp-4h]
  float v14; // [esp+30h] [ebp+8h]
  float v15; // [esp+30h] [ebp+8h]
  signed int v16; // [esp+30h] [ebp+8h]

  sub_10018C87(a3);
  v14 = *(float *)(this + 704) - *(float *)(this + 712);
  v15 = fabs(v14);
  if ( v15 > 0.0001 )
  {
    v4 = (_DWORD *)(this + 3904);
    v5 = this + 792;
    v6 = 16;
    do
    {
      v7 = 0.003921568859368563;
      if ( !*(_DWORD *)(v5 - 4) || !*(_DWORD *)v5 )
      {
        Texture = CREDialog::GetTexture(*(CREDialog **)(this + 112), *(_DWORD *)(v5 - 24));
        v7 = 0.003921568859368563;
        if ( Texture )
        {
          *(_DWORD *)(v5 - 4) = *((_DWORD *)Texture + 131);
          *(_DWORD *)v5 = *((_DWORD *)Texture + 132);
        }
      }
      v10 = (double)(unsigned __int8)((*(unsigned __int8 *)(this + 3968)
                                     | ((*(unsigned __int8 *)(this + 3969)
                                       | (((unsigned int)*(unsigned __int8 *)(this + 3970) | (*v4 << 8)) << 8)) << 8)) >> 16)
          * v7;
      v11 = (double)*(unsigned __int8 *)(this + 3969) * v7;
      v9 = (double)*(unsigned __int8 *)(this + 3968);
      v16 = (*(unsigned __int8 *)(this + 3968)
           | ((*(unsigned __int8 *)(this + 3969) | (((unsigned int)*(unsigned __int8 *)(this + 3970) | (*v4 << 8)) << 8)) << 8)) >> 24;
      *(float *)(v5 + 76) = v10;
      *(float *)(v5 + 80) = v11;
      v12 = v9 * v7;
      *(float *)(v5 + 84) = v12;
      v13 = v7 * (double)v16;
      *(float *)(v5 + 88) = v13;
      CREDialog::DrawSprite(
        *(CREDialog **)(this + 112),
        (struct CREElement *)(v5 - 24),
        (struct tagRECT *)(this + 164),
        1.0);
      ++v4;
      v5 += 196;
      --v6;
    }
    while ( v6 );
  }
}
