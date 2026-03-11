/*
 * func-name: sub_100EDC30
 * func-address: 0x100edc30
 * callers: 0x100ee040, 0x1011f990
 * callees: 0x10009420, 0x10009b40, 0x1000a040, 0x100119b0, 0x10013460, 0x100243f0, 0x100ecce0, 0x100ed3c0, 0x100ed7f0, 0x100ed860, 0x100ed910, 0x101a2500, 0x101a2522
 */

int __thiscall sub_100EDC30(
        int this,
        int a2,
        struct Mesh::SkinWeights *a3,
        unsigned int a4,
        struct Mesh::SkinWeights *a5)
{
  int v6; // ebx
  unsigned int v7; // edi
  int v8; // eax
  int v9; // eax
  unsigned int v10; // edi
  int v11; // eax
  void *v12; // eax
  struct Mesh::SkinWeights *v13; // ecx
  CREControl *v14; // eax
  Mesh::SkinWeights *v15; // eax
  int v16; // ebx
  int v17; // eax
  int v18; // ecx
  void *v19; // eax
  char *v20; // ecx
  struct Mesh::SkinWeights *v21; // ebx
  Mesh::SkinWeights *v23; // [esp-Ch] [ebp-B0h]
  int v24; // [esp-8h] [ebp-ACh]
  int v25; // [esp-8h] [ebp-ACh]
  int v26; // [esp+0h] [ebp-A4h] BYREF
  _BYTE v27[32]; // [esp+Ch] [ebp-98h] BYREF
  void *v28; // [esp+2Ch] [ebp-78h]
  int v29; // [esp+30h] [ebp-74h]
  int v30; // [esp+34h] [ebp-70h]
  void *v31; // [esp+3Ch] [ebp-68h]
  int v32; // [esp+40h] [ebp-64h]
  int v33; // [esp+44h] [ebp-60h]
  int v34; // [esp+88h] [ebp-1Ch]
  void *v35; // [esp+8Ch] [ebp-18h]
  int v36; // [esp+90h] [ebp-14h]
  int *v37; // [esp+94h] [ebp-10h]
  int v38; // [esp+A0h] [ebp-4h]
  int v39; // [esp+B4h] [ebp+10h]

  v37 = &v26;
  v36 = this;
  Mesh::SkinWeights::SkinWeights((Mesh::SkinWeights *)v27, a5);
  v6 = *(_DWORD *)(this + 4);
  v7 = 0;
  v38 = 0;
  if ( v6 )
    v7 = (*(_DWORD *)(this + 12) - v6) / 124;
  if ( a4 )
  {
    if ( v6 )
      v8 = (*(_DWORD *)(this + 8) - v6) / 124;
    else
      v8 = 0;
    if ( 34636833 - v8 < a4 )
      sub_10009B40();
    if ( v6 )
      v9 = (*(_DWORD *)(this + 8) - v6) / 124;
    else
      v9 = 0;
    if ( v7 >= a4 + v9 )
    {
      v21 = *(struct Mesh::SkinWeights **)(this + 8);
      if ( (v21 - a3) / 124 >= a4 )
      {
        *(_DWORD *)(this + 8) = sub_100ED910(
                                  (void *)this,
                                  (struct Mesh::SkinWeights *)((char *)v21 - 124 * a4),
                                  v21,
                                  *(Mesh::SkinWeights **)(this + 8));
        sub_100ED7F0((int)a3, (int)v21 - 124 * a4, (int)v21);
        sub_100ECCE0((int)a3, (int)a3 + 124 * a4, (int)v27);
      }
      else
      {
        sub_100ED910((void *)this, a3, v21, (struct Mesh::SkinWeights *)((char *)a3 + 124 * a4));
        v24 = a4 - (*(_DWORD *)(this + 8) - (int)a3) / 124;
        v23 = *(Mesh::SkinWeights **)(this + 8);
        LOBYTE(v38) = 3;
        sub_100ED860((void *)this, v23, v24, (struct Mesh::SkinWeights *)v27);
        *(_DWORD *)(this + 8) += 124 * a4;
        v25 = *(_DWORD *)(this + 8) - 124 * a4;
        v38 = 0;
        sub_100ECCE0((int)a3, v25, (int)v27);
      }
    }
    else
    {
      if ( 34636833 - (v7 >> 1) >= v7 )
        v10 = (v7 >> 1) + v7;
      else
        v10 = 0;
      if ( v6 )
        v11 = (*(_DWORD *)(this + 8) - v6) / 124;
      else
        v11 = 0;
      if ( v10 < a4 + v11 )
        v10 = a4 + sub_10009420((_DWORD *)this);
      v12 = sub_1000A040(v10);
      v13 = *(struct Mesh::SkinWeights **)(this + 4);
      LOBYTE(v34) = 0;
      v35 = v12;
      LOBYTE(v38) = 1;
      v14 = sub_100ED3C0(v13, a3, (Mesh::SkinWeights *)v12);
      v15 = (Mesh::SkinWeights *)sub_100ED860((void *)this, v14, a4, (struct Mesh::SkinWeights *)v27);
      sub_100ED3C0(a3, *(struct Mesh::SkinWeights **)(this + 8), v15);
      v16 = *(_DWORD *)(this + 4);
      v17 = 0;
      v38 = 0;
      if ( v16 )
        v17 = (*(_DWORD *)(this + 8) - v16) / 124;
      v18 = v17 + a4;
      v39 = v17 + a4;
      if ( v16 )
      {
        sub_100119B0(v16, *(_DWORD *)(this + 8));
        operator delete(*(void **)(this + 4));
        v18 = v39;
      }
      v19 = v35;
      v20 = (char *)v35 + 124 * v18;
      *(_DWORD *)(this + 12) = (char *)v35 + 124 * v10;
      *(_DWORD *)(this + 8) = v20;
      *(_DWORD *)(this + 4) = v19;
    }
  }
  v38 = -1;
  if ( v31 )
    operator delete(v31);
  v31 = 0;
  v32 = 0;
  v33 = 0;
  if ( v28 )
    operator delete(v28);
  v28 = 0;
  v29 = 0;
  v30 = 0;
  return std::string::~string(v27);
}
