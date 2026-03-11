/*
 * func-name: sub_102ACFC0
 * func-address: 0x102acfc0
 * callers: 0x100101c2
 * callees: 0x1000fea7
 */

int __thiscall sub_102ACFC0(int this)
{
  char v3; // [esp+Ch] [ebp-14h] BYREF
  char v4; // [esp+Dh] [ebp-13h] BYREF
  char v5; // [esp+Eh] [ebp-12h] BYREF
  char v6; // [esp+Fh] [ebp-11h] BYREF
  int v7; // [esp+10h] [ebp-10h]
  int v8; // [esp+1Ch] [ebp-4h]

  v7 = this;
  sub_1000FEA7((int)&v4, (int)&v3);
  v8 = 0;
  sub_1000FEA7((int)&v6, (int)&v5);
  LOBYTE(v8) = 1;
  Outpop::IONetwork::INET_Addr::INET_Addr((Outpop::IONetwork::INET_Addr *)(this + 112));
  *(double *)(this + 160) = 0.0;
  *(_DWORD *)(this + 24) = 0;
  *(_DWORD *)(this + 152) = 0;
  *(float *)(this + 168) = 0.0;
  *(_DWORD *)(this + 172) = 0;
  *(_DWORD *)(this + 176) = 0;
  *(_DWORD *)(this + 180) = 0;
  *(_DWORD *)(this + 184) = 0;
  *(_DWORD *)(this + 188) = 0;
  *(_DWORD *)(this + 192) = 0;
  *(_DWORD *)(this + 196) = 0;
  *(_DWORD *)(this + 200) = 0;
  *(_DWORD *)(this + 204) = 0;
  *(_DWORD *)(this + 208) = 0;
  *(_DWORD *)(this + 212) = 0;
  *(_DWORD *)(this + 216) = 0;
  *(_DWORD *)(this + 220) = 0;
  *(_DWORD *)(this + 224) = 0;
  *(_DWORD *)(this + 228) = 0;
  *(_DWORD *)(this + 232) = 0;
  return this;
}
