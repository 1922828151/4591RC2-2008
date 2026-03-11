/*
 * func-name: ?Tick@HookEsbTake@@UAEXXZ_0
 * func-address: 0x10131040
 * callers: 0x10002e8c
 * callees: 0x10008062, 0x1001371e, 0x10018aca, 0x10018e71, 0x102c0ed0, 0x102c23d0, 0x102c9ea8
 */

void __thiscall HookEsbTake::Tick(HookEsbTake *this)
{
  Editor *v2; // eax
  int Actor; // eax
  int v4; // eax
  _DWORD *v5; // eax
  int v6; // ecx
  int v7; // ecx
  int v8; // edx
  _DWORD *v9; // eax
  const void *v10; // eax
  int v11; // edi
  float *v12; // eax
  float v13; // ecx
  float v14; // edx
  float v15; // ecx
  float *v16; // eax
  float v17; // edx
  _DWORD *v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // edx
  int v22; // eax
  int v23; // esi
  int v24; // eax
  _DWORD *v25; // eax
  int v26; // edx
  int v27; // ecx
  int v28; // eax
  _DWORD *v29; // eax
  int v30; // eax
  int v31; // ecx
  int v32; // edx
  _DWORD *v33; // eax
  int v34; // [esp+Ch] [ebp-110h]
  float v35; // [esp+10h] [ebp-10Ch] BYREF
  float v36; // [esp+14h] [ebp-108h]
  float v37; // [esp+18h] [ebp-104h]
  int v38[16]; // [esp+1Ch] [ebp-100h] BYREF
  _DWORD v39[16]; // [esp+5Ch] [ebp-C0h] BYREF
  _BYTE v40[48]; // [esp+9Ch] [ebp-80h] BYREF
  int v41; // [esp+CCh] [ebp-50h]
  int v42; // [esp+D0h] [ebp-4Ch]
  int v43; // [esp+D4h] [ebp-48h]
  _BYTE v44[64]; // [esp+DCh] [ebp-40h] BYREF

  v2 = (Editor *)Editor::Instance(v34, LODWORD(v35));
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
        v38[12] = v6;
        v38[13] = v5[1];
        v38[14] = v5[2];
        sub_10018E71(v40, (int)this + 1228);
        v7 = *((_DWORD *)this + 305);
        v8 = *((_DWORD *)this + 306);
        v41 = *((_DWORD *)this + 304);
        v42 = v7;
        v43 = v8;
        sub_10018ACA(v39, (int)v38);
        v9 = (_DWORD *)(*((_DWORD *)this + 310) + 856);
        *v9 = v39[12];
        v9[1] = v39[13];
        v9[2] = v39[14];
        v10 = (const void *)sub_102C23D0(v44);
        v11 = *((_DWORD *)this + 310);
        v35 = 0.0;
        v36 = 1.0;
        v37 = 0.0;
        qmemcpy((void *)(v11 + 868), v10, 0x40u);
        v12 = (float *)*((_DWORD *)this + 310);
        v12[221] = 0.0;
        v13 = v37;
        v35 = 0.0;
        v12 += 221;
        v36 = 0.0;
        v12[1] = 1.0;
        v14 = v35;
        v37 = 1.0;
        v12[2] = v13;
        v15 = v36;
        v16 = (float *)(*((_DWORD *)this + 310) + 900);
        *v16 = v14;
        v17 = v37;
        v16[1] = v15;
        v16[2] = v17;
      }
      else
      {
        v18 = (_DWORD *)*((_DWORD *)this + 310);
        v18[214] = *((_DWORD *)this + 214);
        v18 += 214;
        v18[1] = *((_DWORD *)this + 215);
        v18[2] = *((_DWORD *)this + 216);
        qmemcpy((void *)(*((_DWORD *)this + 310) + 868), (char *)this + 868, 0x40u);
      }
      *((_BYTE *)this + 1052) = 0;
    }
    if ( (unsigned __int8)std::operator!=<char>((char *)this + 1084, (char *)this + 1112) )
    {
      v19 = World::FindActor(*((_DWORD *)this + 178), (char *)this + 1084);
      *((_DWORD *)this + 285) = _RTDynamicCast(
                                  v19,
                                  0,
                                  &Actor `RTTI Type Descriptor',
                                  &HookEstablishment `RTTI Type Descriptor',
                                  0);
      std::string::operator=((char *)this + 1112, (char *)this + 1084);
    }
    if ( (unsigned __int8)std::operator!=<char>((char *)this + 1144, (char *)this + 1172) )
    {
      v20 = World::FindActor(*((_DWORD *)this + 178), (char *)this + 1144);
      *((_DWORD *)this + 300) = _RTDynamicCast(
                                  v20,
                                  0,
                                  &Actor `RTTI Type Descriptor',
                                  &HookEstablishment `RTTI Type Descriptor',
                                  0);
      std::string::operator=((char *)this + 1172, (char *)this + 1144);
    }
    if ( *((_DWORD *)this + 155) && *((_BYTE *)this + 441) )
    {
      sub_1001371E((int)this + 868);
      v21 = *((_DWORD *)this + 216);
      v22 = *((_DWORD *)this + 214);
      v39[13] = *((_DWORD *)this + 215);
      v39[14] = v21;
      v39[12] = v22;
      v23 = **((_DWORD **)this + 155);
      v24 = NxHelper::ToNxMat34(v38, v39);
      (*(void (__thiscall **)(_DWORD, int))(v23 + 20))(*((_DWORD *)this + 155), v24);
    }
    v25 = (_DWORD *)*((_DWORD *)this + 285);
    if ( v25 )
    {
      v26 = v25[215];
      qmemcpy(v39, v25 + 217, sizeof(v39));
      v27 = v25[214];
      v28 = v25[216];
      v39[12] = v27;
      *(float *)v38 = 0.0;
      v39[14] = v28;
      v29 = (_DWORD *)*((_DWORD *)this + 310);
      v39[13] = v26;
      qmemcpy(v38, v29 + 217, sizeof(v38));
      v38[12] = v29[214];
      v38[13] = v29[215];
      v38[14] = v29[216];
      v30 = sub_10008062((int)v44);
      sub_10018ACA(v40, v30);
      v31 = v42;
      v32 = v43;
      *((_DWORD *)this + 304) = v41;
      *((_DWORD *)this + 305) = v31;
      *((_DWORD *)this + 306) = v32;
      v33 = (_DWORD *)sub_102C0ED0(&v35);
      *((_DWORD *)this + 307) = *v33;
      *((_DWORD *)this + 308) = v33[1];
      *((_DWORD *)this + 309) = v33[2];
    }
    Actor::Tick(this);
  }
  else
  {
    *((float *)this + 205) = 0.0;
    Actor::Tick(this);
  }
}
