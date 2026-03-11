/*
 * func-name: ?AddBeLockedTarget@Robot@GameClient@@QAEXK@Z_0
 * func-address: 0x1017b8b0
 * callers: 0x10002cf2
 * callees: 0x1001a0f5
 */

void __thiscall GameClient::Robot::AddBeLockedTarget(GameClient::Robot *this, unsigned int a2)
{
  unsigned int v2; // edi
  _DWORD *v3; // esi
  int v4; // ecx

  if ( a2 != -1 )
  {
    v2 = 0;
    v3 = (_DWORD *)((char *)this + 304);
    while ( 1 )
    {
      v4 = v3[1];
      if ( !v4 || v2 >= (v3[2] - v4) >> 2 )
        break;
      if ( *(_DWORD *)(v3[1] + 4 * v2) == a2 )
        return;
      ++v2;
    }
    sub_1001A0F5(v3, (int)&a2);
  }
}
