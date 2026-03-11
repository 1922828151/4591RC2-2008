/*
 * func-name: ?SetCurrentRotation@Establishment@GameClient@@UAEXABVMatrix@@@Z_0
 * func-address: 0x101a2510
 * callers: 0x10015ccb
 * callees: 0x102c1be0
 */

void __thiscall GameClient::Establishment::SetCurrentRotation(GameClient::Establishment *this, const struct Matrix *a2)
{
  int *v3; // eax
  int v4; // esi
  int v5; // eax
  float v6; // [esp+Ch] [ebp-18h] BYREF
  float v7; // [esp+10h] [ebp-14h]
  float v8; // [esp+14h] [ebp-10h]
  float v9[3]; // [esp+18h] [ebp-Ch] BYREF

  qmemcpy((char *)this + 36, a2, 0x40u);
  if ( *((_DWORD *)this + 80) )
  {
    v6 = 0.0;
    v7 = 0.0;
    v8 = 0.0;
    sub_102C1BE0((char *)this + 328, &v6);
    v3 = (int *)*((_DWORD *)this + 80);
    v9[0] = *((float *)this + 6) + v6;
    v9[1] = *((float *)this + 7) + v7;
    v9[2] = *((float *)this + 8) + v8;
    v4 = *v3;
    v5 = NxHelper::ToNxVec3(&v6, v9);
    (*(void (__thiscall **)(_DWORD, int))(v4 + 24))(*((_DWORD *)this + 80), v5);
  }
}
