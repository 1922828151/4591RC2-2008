/*
 * func-name: ?Update@NonControlledEstab@GameClient@@UAEXM@Z_0
 * func-address: 0x101b0710
 * callers: 0x10016e41
 * callees: 0x10007ff9
 */

void __thiscall GameClient::NonControlledEstab::Update(GameClient::NonControlledEstab *this, float a2)
{
  int v3; // edx
  int v4; // eax
  int v5; // ecx
  _DWORD v6[16]; // [esp+Ch] [ebp-40h] BYREF

  if ( !*(_BYTE *)(*((_DWORD *)this + 114) + 516) )
  {
    v3 = *((_DWORD *)this + 7);
    v4 = *((_DWORD *)this + 8);
    qmemcpy(v6, (char *)this + 36, sizeof(v6));
    v6[12] = *((_DWORD *)this + 6);
    v5 = *((_DWORD *)this + 75);
    v6[13] = v3;
    v6[14] = v4;
    (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)v5 + 136))(v5, v6);
  }
  GameClient::Establishment::Update(this, a2);
}
