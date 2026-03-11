/*
 * func-name: sub_100BDD20
 * func-address: 0x100bdd20
 * callers: 0x10007aea
 * callees: 0x100199a2, 0x102c23d0
 */

void __thiscall sub_100BDD20(Effect_Base *this)
{
  int v2; // eax
  int v3; // ecx
  int v4; // edx
  _DWORD *v5; // ebp
  int v6; // esi
  int v7; // eax
  int v8; // edx
  _DWORD v9[16]; // [esp+10h] [ebp-80h] BYREF
  _BYTE v10[64]; // [esp+50h] [ebp-40h] BYREF

  v2 = *((_DWORD *)this + 274);
  v3 = *((_DWORD *)this + 275);
  v4 = *((_DWORD *)this + 276);
  v5 = (_DWORD *)*((_DWORD *)this + 263);
  v6 = *((_DWORD *)this + 277);
  v5[61] = v2;
  v5[62] = v3;
  v5[63] = v4;
  v5[64] = v6;
  v7 = *((_DWORD *)this + 214);
  v8 = *((_DWORD *)this + 216);
  qmemcpy(v9, (char *)this + 868, sizeof(v9));
  v9[13] = *((_DWORD *)this + 215);
  v9[12] = v7;
  v9[14] = v8;
  v5[5] = v7;
  v5[6] = *((_DWORD *)this + 215);
  v5[7] = *((_DWORD *)this + 216);
  qmemcpy(v5 + 11, (const void *)sub_102C23D0(v10), 0x40u);
  Effect_Base::Tick(this);
}
