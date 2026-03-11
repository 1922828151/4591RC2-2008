/*
 * func-name: ?Clone@Light@@UAEXPAVActor@@_N@Z
 * func-address: 0x100de040
 * callers: none
 * callees: 0x1000d550, 0x10011510, 0x10026b60, 0x1004f2e0, 0x10136530
 */

void __thiscall Light::Clone(Light *this, struct Actor *a2, int a3)
{
  char v4; // cl
  char v5; // [esp-20h] [ebp-48h] BYREF
  int v6; // [esp-1Ch] [ebp-44h]
  int v7; // [esp-18h] [ebp-40h]
  int v8; // [esp-14h] [ebp-3Ch]
  int v9; // [esp-10h] [ebp-38h]
  int v10; // [esp-Ch] [ebp-34h]
  int v11; // [esp-8h] [ebp-30h]
  int v12; // [esp-4h] [ebp-2Ch]
  float v13; // [esp+0h] [ebp-28h]
  float v14; // [esp+4h] [ebp-24h]
  float v15; // [esp+8h] [ebp-20h]
  float v16; // [esp+Ch] [ebp-1Ch]
  float v17; // [esp+10h] [ebp-18h]
  int v18; // [esp+14h] [ebp-14h]

  Actor::Clone(this, a2, a3);
  *((_DWORD *)a2 + 357) = *((_DWORD *)this + 357);
  *((_BYTE *)a2 + 1420) = *((_BYTE *)this + 1420);
  *((_DWORD *)a2 + 356) = *((_DWORD *)this + 356);
  *((_BYTE *)a2 + 332) = *((_BYTE *)this + 332);
  sub_10011510((int)a2 + 336, (int)this + 336);
  std::vector<Actor *>::operator=((int)a2 + 1436, (int)this + 1436);
  *((_DWORD *)a2 + 358) = *((_DWORD *)this + 358);
  sub_10026B60((int)a2 + 1148, (int)this + 1148);
  v18 = 0;
  v17 = 0.0;
  v16 = 1.0;
  v15 = 1.0;
  qmemcpy((char *)a2 + 1076, (char *)this + 1076, 0x48u);
  v14 = 0.0;
  v13 = 0.0;
  *((_BYTE *)a2 + 1452) = *((_BYTE *)this + 1452);
  v4 = *((_BYTE *)this + 1053);
  v12 = 0;
  *((_BYTE *)a2 + 1053) = v4;
  std::string::string(&v5, (char *)this + 1364);
  Texture::Load(v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18);
}
