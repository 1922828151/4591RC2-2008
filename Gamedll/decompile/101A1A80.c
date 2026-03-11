/*
 * func-name: ?SetCurrentPosition@Establishment@GameClient@@UAEXABVVector@@@Z_0
 * func-address: 0x101a1a80
 * callers: 0x1000de3b
 * callees: 0x102c1be0
 */

void __thiscall GameClient::Establishment::SetCurrentPosition(GameClient::Establishment *this, const struct Vector *a2)
{
  bool v3; // zf
  int *v4; // eax
  int v5; // edi
  int v6; // eax
  float v7; // [esp+4h] [ebp-18h] BYREF
  float v8; // [esp+8h] [ebp-14h]
  float v9; // [esp+Ch] [ebp-10h]
  float v10[3]; // [esp+10h] [ebp-Ch] BYREF

  v3 = *((_DWORD *)this + 80) == 0;
  *((_DWORD *)this + 6) = *(_DWORD *)a2;
  *((_DWORD *)this + 7) = *((_DWORD *)a2 + 1);
  *((_DWORD *)this + 8) = *((_DWORD *)a2 + 2);
  if ( !v3 )
  {
    v7 = 0.0;
    v8 = 0.0;
    v9 = 0.0;
    sub_102C1BE0((char *)this + 328, &v7);
    v4 = (int *)*((_DWORD *)this + 80);
    v10[0] = v7 + *((float *)this + 6);
    v10[1] = *((float *)this + 7) + v8;
    v10[2] = *((float *)this + 8) + v9;
    v5 = *v4;
    v6 = NxHelper::ToNxVec3(&v7, v10);
    (*(void (__thiscall **)(_DWORD, int))(v5 + 24))(*((_DWORD *)this + 80), v6);
  }
}
