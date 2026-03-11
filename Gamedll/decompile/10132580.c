/*
 * func-name: ?Tick@HookEsbAirDrop@@UAEXXZ_0
 * func-address: 0x10132580
 * callers: 0x100196cd
 * callees: 0x10008062, 0x1001371e, 0x10018aca, 0x10018e71, 0x102c0ed0, 0x102c23d0, 0x102c9ea8
 */

void __thiscall HookEsbAirDrop::Tick(HookEsbAirDrop *this)
{
  Editor *v2; // eax
  int Actor; // eax
  int v4; // eax
  _DWORD *v5; // eax
  int v6; // ecx
  int v7; // ecx
  int v8; // edx
  _DWORD *v9; // eax
  char *v10; // esi
  _DWORD *v11; // eax
  int v12; // eax
  _DWORD *v13; // eax
  int v14; // edx
  int v15; // ecx
  int v16; // edx
  _DWORD *v17; // eax
  int v18; // eax
  int v19; // ecx
  int v20; // edx
  _DWORD *v21; // eax
  int v22; // [esp+4h] [ebp-110h]
  int v23[16]; // [esp+8h] [ebp-10Ch] BYREF
  _BYTE v24[48]; // [esp+48h] [ebp-CCh] BYREF
  int v25; // [esp+78h] [ebp-9Ch]
  int v26; // [esp+7Ch] [ebp-98h]
  int v27; // [esp+80h] [ebp-94h]
  _DWORD v28[16]; // [esp+88h] [ebp-8Ch] BYREF
  _BYTE v29[12]; // [esp+C8h] [ebp-4Ch] BYREF
  _BYTE v30[64]; // [esp+D4h] [ebp-40h] BYREF

  v2 = (Editor *)Editor::Instance(v22, v23[0]);
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
        v23[12] = v6;
        v23[13] = v5[1];
        v23[14] = v5[2];
        sub_10018E71(v24, (int)this + 1188);
        v7 = *((_DWORD *)this + 295);
        v8 = *((_DWORD *)this + 296);
        v25 = *((_DWORD *)this + 294);
        v26 = v7;
        v27 = v8;
        sub_10018ACA(v28, (int)v23);
        v9 = (_DWORD *)(*((_DWORD *)this + 301) + 856);
        *v9 = v28[12];
        v9[1] = v28[13];
        v9[2] = v28[14];
        v10 = (char *)sub_102C23D0(v30);
      }
      else
      {
        v11 = (_DWORD *)(*((_DWORD *)this + 301) + 856);
        *v11 = *((_DWORD *)this + 214);
        v11[1] = *((_DWORD *)this + 215);
        v11[2] = *((_DWORD *)this + 216);
        v10 = (char *)this + 868;
      }
      qmemcpy((void *)(*((_DWORD *)this + 301) + 868), v10, 0x40u);
      *((_BYTE *)this + 1052) = 0;
    }
    if ( (unsigned __int8)std::operator!=<char>((char *)this + 1084, (char *)this + 1112) )
    {
      v12 = World::FindActor(*((_DWORD *)this + 178), (char *)this + 1084);
      *((_DWORD *)this + 285) = _RTDynamicCast(
                                  v12,
                                  0,
                                  &Actor `RTTI Type Descriptor',
                                  &HookEstablishment `RTTI Type Descriptor',
                                  0);
      std::string::operator=((char *)this + 1112, (char *)this + 1084);
    }
    v13 = (_DWORD *)*((_DWORD *)this + 285);
    if ( v13 )
    {
      v14 = v13[214];
      qmemcpy(v28, v13 + 217, sizeof(v28));
      v15 = v13[215];
      v28[12] = v14;
      v16 = v13[216];
      v17 = (_DWORD *)*((_DWORD *)this + 301);
      v28[13] = v15;
      v28[14] = v16;
      qmemcpy(v23, v17 + 217, sizeof(v23));
      v23[12] = v17[214];
      v23[13] = v17[215];
      v23[14] = v17[216];
      v18 = sub_10008062((int)v30);
      sub_10018ACA(v24, v18);
      v19 = v26;
      v20 = v27;
      *((_DWORD *)this + 294) = v25;
      *((_DWORD *)this + 295) = v19;
      *((_DWORD *)this + 296) = v20;
      v21 = (_DWORD *)sub_102C0ED0(v29);
      *((_DWORD *)this + 297) = *v21;
      *((_DWORD *)this + 298) = v21[1];
      *((_DWORD *)this + 299) = v21[2];
    }
    Actor::Tick(this);
  }
  else
  {
    *((float *)this + 205) = 0.0;
    Actor::Tick(this);
  }
}
