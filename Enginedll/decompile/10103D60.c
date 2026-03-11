/*
 * func-name: sub_10103D60
 * func-address: 0x10103d60
 * callers: 0x10103d60, 0x10104470
 * callees: 0x1004c2c0, 0x100ee930, 0x10102950, 0x10102e10, 0x10103d60, 0x101050c0, 0x10105130, 0x1017a0b0
 */

int __thiscall sub_10103D60(float *this, int a2, int a3)
{
  int v4; // ecx
  int v5; // eax
  _DWORD *v6; // edx
  int result; // eax
  _DWORD *v8; // esi
  int v9; // ebx
  float *WorldBBox; // eax
  float *v11; // eax
  float **v12; // ebp
  int v13; // ebx
  bool v14; // cc
  float *v15; // ecx
  int v16; // edx
  unsigned int v17; // eax
  int v18; // [esp+8h] [ebp-48h]
  float **v19; // [esp+Ch] [ebp-44h]
  float v20; // [esp+10h] [ebp-40h]
  float v21; // [esp+14h] [ebp-3Ch]
  float v22; // [esp+18h] [ebp-38h]
  float v23[3]; // [esp+1Ch] [ebp-34h] BYREF
  _DWORD v24[10]; // [esp+28h] [ebp-28h] BYREF

  v4 = *(_DWORD *)(a2 + 8);
  v5 = 0;
  if ( v4 > 0 )
  {
    v6 = this + 13;
    while ( !*v6 )
    {
      ++v5;
      ++v6;
      if ( v5 >= v4 )
        goto LABEL_5;
    }
    v18 = 0;
    v8 = &unk_102829F0;
    v19 = (float **)(this + 13);
    while ( 1 )
    {
      v9 = 0;
      while ( 1 )
      {
        WorldBBox = (float *)StaticModel::GetWorldBBox(*(_DWORD **)(a3 + 716), v24);
        v11 = sub_1004C2C0(WorldBBox, v23, v9);
        v20 = *v11 - this[10];
        v21 = v11[1] - this[11];
        v22 = v11[2] - this[12];
        sub_1017A0B0(v24);
        if ( (*v8 ^ LODWORD(v20)) >= 0 && (v8[1] ^ LODWORD(v21)) >= 0 && (v8[2] ^ LODWORD(v22)) >= 0 )
          break;
        if ( ++v9 >= 8 )
        {
          v12 = v19;
          v13 = a2;
          goto LABEL_14;
        }
      }
      v12 = v19;
      v15 = *v19;
      if ( !*v19 )
        break;
      v16 = *((_DWORD *)v15 + 22);
      if ( v16 )
        v17 = (*((_DWORD *)v15 + 23) - v16) >> 2;
      else
        v17 = 0;
      v13 = a2;
      if ( v17 >= *(_DWORD *)(a2 + 12) - 1 )
        goto LABEL_23;
      sub_10103D60(a2, a3);
LABEL_14:
      result = v18 + 1;
      v8 += 3;
      v14 = ++v18 < *(_DWORD *)(v13 + 8);
      v19 = v12 + 1;
      if ( !v14 )
        return result;
    }
    v13 = a2;
LABEL_23:
    sub_10102950(this, v19, v18, a3);
    sub_10102E10((int)*v19, v13);
    goto LABEL_14;
  }
LABEL_5:
  a2 = (int)this;
  sub_101050C0(a3 + 1152, (int)&a2);
  return sub_10105130((int)(this + 21), (int)&a3);
}
