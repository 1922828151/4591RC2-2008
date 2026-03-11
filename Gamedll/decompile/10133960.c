/*
 * func-name: ?Tick@HookEsbTransport@@UAEXXZ_0
 * func-address: 0x10133960
 * callers: 0x1001a866
 * callees: 0x10008062, 0x1001371e, 0x10018aca, 0x10018e71, 0x102c0ed0, 0x102c23d0, 0x102c9ea8
 */

void __thiscall HookEsbTransport::Tick(HookEsbTransport *this)
{
  Editor *v2; // eax
  int Actor; // eax
  int v4; // eax
  _DWORD *v5; // eax
  int v6; // ecx
  int v7; // ecx
  int v8; // edx
  float *v9; // eax
  float v10; // ecx
  float v11; // edx
  _DWORD *v12; // eax
  int v13; // ecx
  int v14; // edx
  _DWORD *v15; // eax
  char *v16; // esi
  _DWORD *v17; // eax
  _DWORD *v18; // eax
  _DWORD *v19; // eax
  int v20; // eax
  _DWORD *v21; // eax
  int v22; // edx
  int v23; // ecx
  int v24; // edx
  float *v25; // eax
  int v26; // eax
  int v27; // ecx
  int v28; // edx
  _DWORD *v29; // eax
  int v30; // eax
  float *v31; // eax
  int v32; // eax
  int v33; // ecx
  int v34; // edx
  _DWORD *v35; // eax
  int v36; // eax
  _DWORD *v37; // eax
  int v38; // eax
  int v39; // ecx
  int v40; // edx
  _DWORD *v41; // eax
  int v42; // [esp+4h] [ebp-210h]
  int v43[16]; // [esp+8h] [ebp-20Ch] BYREF
  float v44[16]; // [esp+48h] [ebp-1CCh] BYREF
  float v45[16]; // [esp+88h] [ebp-18Ch] BYREF
  _BYTE v46[12]; // [esp+C8h] [ebp-14Ch] BYREF
  _DWORD v47[16]; // [esp+D4h] [ebp-140h] BYREF
  _BYTE v48[48]; // [esp+114h] [ebp-100h] BYREF
  int v49; // [esp+144h] [ebp-D0h]
  int v50; // [esp+148h] [ebp-CCh]
  int v51; // [esp+14Ch] [ebp-C8h]
  _BYTE v52[48]; // [esp+154h] [ebp-C0h] BYREF
  int v53; // [esp+184h] [ebp-90h]
  int v54; // [esp+188h] [ebp-8Ch]
  int v55; // [esp+18Ch] [ebp-88h]
  _BYTE v56[48]; // [esp+194h] [ebp-80h] BYREF
  int v57; // [esp+1C4h] [ebp-50h]
  int v58; // [esp+1C8h] [ebp-4Ch]
  int v59; // [esp+1CCh] [ebp-48h]
  _BYTE v60[64]; // [esp+1D4h] [ebp-40h] BYREF

  v2 = (Editor *)Editor::Instance(v42, v43[0]);
  if ( Editor::GetEditorMode(v2) )
  {
    if ( *((_BYTE *)this + 1052) )
    {
      Actor = World::FindActor(*((_DWORD *)this + 178), (char *)this + 1084);
      v4 = _RTDynamicCast(Actor, 0, &Actor `RTTI Type Descriptor', &HookEstablishment `RTTI Type Descriptor', 0);
      *((_DWORD *)this + 285) = v4;
      if ( v4 )
      {
        sub_1001371E(v4 + 868);
        v5 = (_DWORD *)*((_DWORD *)this + 285);
        v6 = v5[214];
        v5 += 214;
        v43[12] = v6;
        v43[13] = v5[1];
        v43[14] = v5[2];
        sub_10018E71(v47, (int)this + 1188);
        v7 = *((_DWORD *)this + 295);
        v8 = *((_DWORD *)this + 296);
        v47[12] = *((_DWORD *)this + 294);
        v47[13] = v7;
        v47[14] = v8;
        sub_10018ACA(v45, (int)v43);
        v9 = (float *)(*((_DWORD *)this + 301) + 856);
        *v9 = v45[12];
        v9[1] = v45[13];
        v9[2] = v45[14];
        qmemcpy((void *)(*((_DWORD *)this + 301) + 868), (const void *)sub_102C23D0(v60), 0x40u);
        sub_10018E71(v44, (int)this + 1220);
        v10 = *((float *)this + 303);
        v11 = *((float *)this + 304);
        v44[12] = *((float *)this + 302);
        v44[13] = v10;
        v44[14] = v11;
        sub_10018ACA(v56, (int)v43);
        v12 = (_DWORD *)(*((_DWORD *)this + 309) + 856);
        *v12 = v57;
        v12[1] = v58;
        v12[2] = v59;
        qmemcpy((void *)(*((_DWORD *)this + 309) + 868), (const void *)sub_102C23D0(v60), 0x40u);
        sub_10018E71(v48, (int)this + 1252);
        v13 = *((_DWORD *)this + 311);
        v14 = *((_DWORD *)this + 312);
        v49 = *((_DWORD *)this + 310);
        v50 = v13;
        v51 = v14;
        sub_10018ACA(v52, (int)v43);
        v15 = (_DWORD *)(*((_DWORD *)this + 317) + 856);
        *v15 = v53;
        v15[1] = v54;
        v15[2] = v55;
        v16 = (char *)sub_102C23D0(v60);
      }
      else
      {
        v17 = (_DWORD *)*((_DWORD *)this + 301);
        v17[214] = *((_DWORD *)this + 214);
        v17[215] = *((_DWORD *)this + 215);
        v17[216] = *((_DWORD *)this + 216);
        qmemcpy((void *)(*((_DWORD *)this + 301) + 868), (char *)this + 868, 0x40u);
        v18 = (_DWORD *)*((_DWORD *)this + 309);
        v18[214] = *((_DWORD *)this + 214);
        v18[215] = *((_DWORD *)this + 215);
        v18[216] = *((_DWORD *)this + 216);
        qmemcpy((void *)(*((_DWORD *)this + 309) + 868), (char *)this + 868, 0x40u);
        v19 = (_DWORD *)(*((_DWORD *)this + 317) + 856);
        *v19 = *((_DWORD *)this + 214);
        v19[1] = *((_DWORD *)this + 215);
        v19[2] = *((_DWORD *)this + 216);
        v16 = (char *)this + 868;
      }
      qmemcpy((void *)(*((_DWORD *)this + 317) + 868), v16, 0x40u);
      *((_BYTE *)this + 1052) = 0;
    }
    if ( (unsigned __int8)std::operator!=<char>((char *)this + 1084, (char *)this + 1112) )
    {
      v20 = World::FindActor(*((_DWORD *)this + 178), (char *)this + 1084);
      *((_DWORD *)this + 285) = _RTDynamicCast(
                                  v20,
                                  0,
                                  &Actor `RTTI Type Descriptor',
                                  &HookEstablishment `RTTI Type Descriptor',
                                  0);
      std::string::operator=((char *)this + 1112, (char *)this + 1084);
    }
    v21 = (_DWORD *)*((_DWORD *)this + 285);
    if ( v21 )
    {
      v22 = v21[214];
      qmemcpy(v47, v21 + 217, sizeof(v47));
      v23 = v21[215];
      v47[12] = v22;
      v24 = v21[216];
      v25 = (float *)*((_DWORD *)this + 301);
      v47[13] = v23;
      v47[14] = v24;
      qmemcpy(v44, v25 + 217, sizeof(v44));
      v44[12] = v25[214];
      v44[13] = v25[215];
      v44[14] = v25[216];
      v26 = sub_10008062((int)v60);
      sub_10018ACA(v52, v26);
      v27 = v54;
      v28 = v55;
      *((_DWORD *)this + 294) = v53;
      *((_DWORD *)this + 295) = v27;
      *((_DWORD *)this + 296) = v28;
      v29 = (_DWORD *)sub_102C0ED0(v46);
      *((_DWORD *)this + 297) = *v29;
      *((_DWORD *)this + 298) = v29[1];
      v30 = v29[2];
      v45[0] = 0.0;
      v45[1] = 0.0;
      *((_DWORD *)this + 299) = v30;
      v31 = (float *)*((_DWORD *)this + 309);
      qmemcpy(v45, v31 + 217, sizeof(v45));
      v45[12] = v31[214];
      v45[13] = v31[215];
      v45[14] = v31[216];
      v32 = sub_10008062((int)v60);
      sub_10018ACA(v48, v32);
      v33 = v50;
      v34 = v51;
      *((_DWORD *)this + 302) = v49;
      *((_DWORD *)this + 303) = v33;
      *((_DWORD *)this + 304) = v34;
      v35 = (_DWORD *)sub_102C0ED0(v46);
      *((_DWORD *)this + 305) = *v35;
      *((_DWORD *)this + 306) = v35[1];
      v36 = v35[2];
      *(float *)v43 = 0.0;
      *(float *)&v43[1] = 0.0;
      *((_DWORD *)this + 307) = v36;
      v37 = (_DWORD *)*((_DWORD *)this + 317);
      qmemcpy(v43, v37 + 217, sizeof(v43));
      v43[12] = v37[214];
      v43[13] = v37[215];
      v43[14] = v37[216];
      v38 = sub_10008062((int)v60);
      sub_10018ACA(v56, v38);
      v39 = v58;
      v40 = v59;
      *((_DWORD *)this + 310) = v57;
      *((_DWORD *)this + 311) = v39;
      *((_DWORD *)this + 312) = v40;
      v41 = (_DWORD *)sub_102C0ED0(v46);
      *((_DWORD *)this + 313) = *v41;
      *((_DWORD *)this + 314) = v41[1];
      *((_DWORD *)this + 315) = v41[2];
    }
    Actor::Tick(this);
  }
  else
  {
    *((float *)this + 205) = 0.0;
    Actor::Tick(this);
  }
}
