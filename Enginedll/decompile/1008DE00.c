/*
 * func-name: ?LandDown@Editor@@QAEXXZ
 * func-address: 0x1008de00
 * callers: none
 * callees: 0x1000f2e0, 0x1008bd00, 0x10091b60, 0x100ee930, 0x1013fff0, 0x1017a0b0, 0x101a2500
 */

void __thiscall Editor::LandDown(Editor *this)
{
  char *v2; // edi
  struct Editor::Undo *v3; // eax
  unsigned int i; // ebp
  int v5; // ecx
  int v6; // esi
  float v7; // [esp+10h] [ebp-128h]
  float v8; // [esp+10h] [ebp-128h]
  int v9; // [esp+14h] [ebp-124h] BYREF
  float v10; // [esp+18h] [ebp-120h]
  int v11; // [esp+1Ch] [ebp-11Ch]
  Editor *v12; // [esp+20h] [ebp-118h]
  int v13; // [esp+24h] [ebp-114h] BYREF
  float v14; // [esp+28h] [ebp-110h]
  int v15; // [esp+2Ch] [ebp-10Ch]
  _BYTE v16[8]; // [esp+30h] [ebp-108h] BYREF
  double v17; // [esp+38h] [ebp-100h]
  void *v18; // [esp+44h] [ebp-F4h]
  int v19; // [esp+48h] [ebp-F0h]
  int v20; // [esp+4Ch] [ebp-ECh]
  void *v21; // [esp+54h] [ebp-E4h]
  int v22; // [esp+58h] [ebp-E0h]
  int v23; // [esp+5Ch] [ebp-DCh]
  void *v24; // [esp+64h] [ebp-D4h]
  int v25; // [esp+68h] [ebp-D0h]
  int v26; // [esp+6Ch] [ebp-CCh]
  int v27; // [esp+70h] [ebp-C8h]
  int v28; // [esp+74h] [ebp-C4h]
  int v29; // [esp+78h] [ebp-C0h]
  int v30; // [esp+7Ch] [ebp-BCh]
  float v31; // [esp+80h] [ebp-B8h]
  float v32; // [esp+84h] [ebp-B4h]
  float v33; // [esp+88h] [ebp-B0h]
  float v34; // [esp+8Ch] [ebp-ACh]
  float v35; // [esp+90h] [ebp-A8h]
  float v36; // [esp+94h] [ebp-A4h]
  _BYTE v37[32]; // [esp+98h] [ebp-A0h] BYREF
  float v38; // [esp+B8h] [ebp-80h]
  _BYTE v39[108]; // [esp+C0h] [ebp-78h] BYREF
  int v40; // [esp+134h] [ebp-4h]

  v2 = (char *)this + 2244;
  v12 = this;
  v3 = (struct Editor::Undo *)sub_10091B60((char *)this + 2244, 0);
  Editor::PushUndo(this, v3);
  v40 = -1;
  sub_1000F2E0((int)v39);
  for ( i = 0; ; ++i )
  {
    v5 = *((_DWORD *)v2 + 1);
    if ( !v5 || i >= (*((_DWORD *)v2 + 2) - v5) >> 2 )
      break;
    v6 = *(_DWORD *)(*((_DWORD *)v2 + 1) + 4 * i);
    v18 = 0;
    v19 = 0;
    v20 = 0;
    v21 = 0;
    v22 = 0;
    v23 = 0;
    v31 = 0.0;
    v32 = 0.0;
    v24 = 0;
    v33 = 0.0;
    v25 = 0;
    v34 = 0.0;
    v26 = 0;
    v35 = 0.0;
    v30 = -1;
    v36 = 0.0;
    v29 = 0;
    v27 = 0;
    v28 = 0;
    v16[0] = 0;
    v13 = *(_DWORD *)(v6 + 856);
    v14 = *(float *)(v6 + 860);
    v15 = *(_DWORD *)(v6 + 864);
    v40 = 3;
    v14 = v14 - 10000.0;
    v9 = *(_DWORD *)(v6 + 856);
    v10 = *(float *)(v6 + 860);
    v11 = *(_DWORD *)(v6 + 864);
    v10 = v10 + 10.0;
    StaticModel::GetWorldBBox(*(_DWORD *)(v6 + 716), v37);
    v7 = *(float *)(v6 + 860) - v38;
    v8 = v7 * 0.8999999761581421;
    LOBYTE(v40) = 4;
    World::CollisionCheckRay(v6, &v9, &v13, 1, v16, 0, 0);
    if ( v27 )
      *(float *)(v6 + 860) = *(float *)(v6 + 860) - (v8 + v17 - 10.0);
    LOBYTE(v40) = 3;
    sub_1017A0B0(v37);
    v40 = -1;
    if ( v24 )
      operator delete(v24);
    v24 = 0;
    v25 = 0;
    v26 = 0;
    if ( v21 )
      operator delete(v21);
    v21 = 0;
    v22 = 0;
    v23 = 0;
    if ( v18 )
      operator delete(v18);
  }
}
