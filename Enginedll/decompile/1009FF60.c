/*
 * func-name: ?ChangeSystemsWorld@FXManager@@QAEXPAVWorld@@0@Z
 * func-address: 0x1009ff60
 * callers: 0x1004ef90, 0x10087570, 0x10087a10, 0x10088400, 0x1010a6c0
 * callees: none
 */

void __thiscall FXManager::ChangeSystemsWorld(FXManager *this, struct World *a2, struct World *a3)
{
  unsigned int i; // edi
  int v5; // ecx
  int v6; // eax

  for ( i = 0; ; ++i )
  {
    v5 = *((_DWORD *)this + 2);
    if ( !v5 || i >= (*((_DWORD *)this + 3) - v5) >> 2 )
      break;
    v6 = *((_DWORD *)this + 2);
    if ( *(struct World **)(*(_DWORD *)(v6 + 4 * i) + 116) == a2 )
    {
      if ( !v6 || i >= (*((_DWORD *)this + 3) - v6) >> 2 )
        invalid_parameter_noinfo();
      *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 2) + 4 * i) + 116) = a3;
    }
  }
}
