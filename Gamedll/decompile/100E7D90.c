/*
 * func-name: ?PreRender@SampleWeapon@@UAEXPAVCamera@@@Z_0
 * func-address: 0x100e7d90
 * callers: 0x100197ea
 * callees: 0x10018e71, 0x102c1be0, 0x102c23d0
 */

void __thiscall SampleWeapon::PreRender(SampleWeapon *this, struct Camera *a2)
{
  int v3; // eax
  struct Camera *v4; // esi
  float v5; // edx
  double v6; // st7
  double v7; // st7
  int v8; // ecx
  _DWORD *v9; // eax
  int v10; // ecx
  _DWORD *v11; // eax
  int v12; // ecx
  int v13; // ecx
  _DWORD *v14; // eax
  int v15; // ecx
  void (__stdcall ***v16)(char *, char *, _DWORD); // ecx
  float v17; // [esp+1Ch] [ebp-58h] BYREF
  float v18; // [esp+20h] [ebp-54h]
  float v19; // [esp+24h] [ebp-50h]
  float v20; // [esp+28h] [ebp-4Ch] BYREF
  float v21; // [esp+2Ch] [ebp-48h]
  float v22; // [esp+30h] [ebp-44h]
  _BYTE v23[64]; // [esp+34h] [ebp-40h] BYREF

  v3 = *((_DWORD *)this + 263);
  if ( !v3 )
  {
LABEL_7:
    v4 = a2;
    goto LABEL_8;
  }
  if ( *(_BYTE *)(v3 + 1064) )
  {
    qmemcpy((char *)this + 868, (const void *)sub_102C23D0(v23), 0x40u);
    v11 = *(_DWORD **)(*((_DWORD *)this + 263) + 1080);
    v12 = v11[53];
    v11 += 53;
    *((_DWORD *)this + 214) = v12;
    *((_DWORD *)this + 215) = v11[1];
    v13 = *((_DWORD *)this + 179);
    *((_DWORD *)this + 216) = v11[2];
    if ( v13 )
    {
      (*(void (__thiscall **)(int, char *, char *))(*(_DWORD *)v13 + 28))(v13, (char *)this + 868, (char *)this + 856);
      v14 = (_DWORD *)*((_DWORD *)this + 264);
      v15 = v14[53];
      v14 += 53;
      *((_DWORD *)this + 265) = v15;
      *((_DWORD *)this + 266) = v14[1];
      *((_DWORD *)this + 267) = v14[2];
    }
    goto LABEL_7;
  }
  v20 = 0.15000001;
  v21 = -0.28;
  v22 = 0.44999999;
  v17 = 0.0;
  v18 = 0.0;
  qmemcpy((char *)this + 868, (const void *)sub_10018E71(v23, (int)a2 + 376), 0x40u);
  v19 = 0.0;
  sub_102C1BE0(&v20, &v17);
  v4 = a2;
  v20 = *((float *)a2 + 88) + v17;
  v21 = *((float *)a2 + 89) + v18;
  v5 = v21;
  v6 = *((float *)a2 + 90);
  *((float *)this + 214) = v20;
  v7 = v6 + v19;
  *((float *)this + 215) = v5;
  v22 = v7;
  *((float *)this + 216) = v22;
  v8 = *((_DWORD *)this + 179);
  if ( v8 )
  {
    (*(void (__thiscall **)(int, char *, char *))(*(_DWORD *)v8 + 28))(v8, (char *)this + 868, (char *)this + 856);
    v9 = (_DWORD *)*((_DWORD *)this + 264);
    v10 = v9[53];
    v9 += 53;
    *((_DWORD *)this + 265) = v10;
    *((_DWORD *)this + 266) = v9[1];
    *((_DWORD *)this + 267) = v9[2];
  }
LABEL_8:
  v16 = (void (__stdcall ***)(char *, char *, _DWORD))*((_DWORD *)this + 273);
  if ( v16 )
    (**v16)((char *)this + 856, (char *)this + 844, 3000.0);
  Actor::PreRender(this, v4);
}
