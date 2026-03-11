/*
 * func-name: ?ReposControl@CBattleFieldDetailUI@@QAEXXZ_0
 * func-address: 0x102550c0
 * callers: 0x1001a5cd
 * callees: 0x1001336d, 0x10013d5e
 */

void __thiscall CBattleFieldDetailUI::ReposControl(CBattleFieldDetailUI *this)
{
  void *v2; // ebx
  _DWORD *v3; // edi
  void *v4; // ebp
  float *Control; // ebp
  void (__thiscall *v6)(float *, int, int); // edx
  struct CREControl *v7; // ebp
  void (__thiscall *v8)(struct CREControl *, int, int); // edx
  int v9; // eax
  float *v10; // ebp
  void (__thiscall *v11)(float *, int, int); // eax
  int v12; // eax
  float *v13; // ebp
  void (__thiscall *v14)(float *, int, int); // edx
  int v15; // eax
  struct CREControl *v16; // ebp
  void (__thiscall *v17)(struct CREControl *, int, int); // edx
  int v18; // eax
  struct CREControl *v19; // ebp
  void (__thiscall *v20)(struct CREControl *, int); // eax
  int v21; // edx
  int v22; // [esp+58h] [ebp-20h]
  int v23; // [esp+58h] [ebp-20h]
  int v24; // [esp+58h] [ebp-20h]
  int v25; // [esp+58h] [ebp-20h]
  int v26; // [esp+5Ch] [ebp-1Ch]
  int v27; // [esp+5Ch] [ebp-1Ch]
  int v28[2]; // [esp+70h] [ebp-8h] BYREF

  v2 = (void *)*((_DWORD *)this + 996);
  v3 = (_DWORD *)((char *)this + 3976);
  if ( *((_DWORD *)this + 995) > (unsigned int)v2 )
    _invalid_parameter_noinfo();
  v4 = (void *)v3[1];
  if ( (unsigned int)v4 > v3[2] )
    _invalid_parameter_noinfo();
  sub_10013D5E((int)v28, (int)v3, v4, (int)v3, v2);
  Control = (float *)CREDialog::GetControl(this, 2);
  v6 = *(void (__thiscall **)(float *, int, int))(*(_DWORD *)Control + 160);
  v22 = *((_DWORD *)this + 175) - 27;
  v28[0] = (int)Control;
  v6(Control, v22, 35);
  (*(void (__thiscall **)(float *, int))(*(_DWORD *)Control + 136))(Control, 1);
  Control[132] = 0.0;
  sub_1001336D(v3, (int)v28);
  v7 = CREDialog::GetControl(this, 3);
  v8 = *(void (__thiscall **)(struct CREControl *, int, int))(*(_DWORD *)v7 + 156);
  v26 = *((_DWORD *)v7 + 25);
  v23 = *((_DWORD *)this + 175) - 19;
  v28[0] = (int)v7;
  v8(v7, v23, v26);
  v9 = *(_DWORD *)v7;
  *((float *)v7 + 132) = 0.0;
  (*(void (__thiscall **)(struct CREControl *, int))(v9 + 136))(v7, 1);
  sub_1001336D(v3, (int)v28);
  v10 = (float *)CREDialog::GetControl(this, 7);
  v11 = *(void (__thiscall **)(float *, int, int))(*(_DWORD *)v10 + 156);
  v28[0] = (int)v10;
  v11(v10, 8, 9);
  (*(void (__thiscall **)(float *, int, int))(*(_DWORD *)v10 + 160))(v10, *((_DWORD *)this + 175) - 16, 35);
  v12 = *(_DWORD *)v10;
  v10[132] = 0.0;
  (*(void (__thiscall **)(float *, int))(v12 + 136))(v10, 1);
  sub_1001336D(v3, (int)v28);
  v13 = (float *)CREDialog::GetControl(this, 4);
  v14 = *(void (__thiscall **)(float *, int, int))(*(_DWORD *)v13 + 160);
  v24 = *((_DWORD *)this + 175) - 27;
  v28[0] = (int)v13;
  v14(v13, v24, 17);
  v15 = *(_DWORD *)v13;
  v13[132] = 0.0;
  (*(void (__thiscall **)(float *, int))(v15 + 136))(v13, 1);
  sub_1001336D(v3, (int)v28);
  v16 = CREDialog::GetControl(this, 5);
  v17 = *(void (__thiscall **)(struct CREControl *, int, int))(*(_DWORD *)v16 + 156);
  v27 = *((_DWORD *)v16 + 25);
  v25 = *((_DWORD *)this + 175) - 19;
  v28[0] = (int)v16;
  v17(v16, v25, v27);
  v18 = *(_DWORD *)v16;
  *((float *)v16 + 132) = 0.0;
  (*(void (__thiscall **)(struct CREControl *, int))(v18 + 136))(v16, 1);
  sub_1001336D(v3, (int)v28);
  *(float *)(*((_DWORD *)this + 969) + 528) = 0.0;
  v28[0] = *((_DWORD *)this + 969);
  sub_1001336D(v3, (int)v28);
  v19 = CREDialog::GetControl(this, 12);
  v20 = *(void (__thiscall **)(struct CREControl *, int))(*(_DWORD *)v19 + 136);
  v28[0] = (int)v19;
  v20(v19, 1);
  v21 = *(_DWORD *)v19;
  *((float *)v19 + 132) = 0.0;
  (*(void (__thiscall **)(struct CREControl *, int, _DWORD))(v21 + 156))(
    v19,
    *((_DWORD *)this + 175) - *((_DWORD *)v19 + 26) - 13,
    *((_DWORD *)v19 + 25));
  sub_1001336D(v3, (int)v28);
  v28[0] = (int)CREDialog::GetControl(this, 13);
  sub_1001336D(v3, (int)v28);
  v28[0] = (int)CREDialog::GetControl(this, 14);
  sub_1001336D(v3, (int)v28);
}
