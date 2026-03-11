/*
 * func-name: ?StartSpawningNow@TraceLineSystem@@UAEXXZ_0
 * func-address: 0x100ca960
 * callers: 0x10015afa
 * callees: none
 */

void __thiscall TraceLineSystem::StartSpawningNow(TraceLineSystem *this)
{
  int v2; // eax
  int v3; // ebp
  int v4; // eax
  int v5; // eax
  int v6; // eax
  unsigned int v7; // edi
  int v8; // eax

  *((_BYTE *)this + 200) = 0;
  v2 = *((_DWORD *)this + 45);
  v3 = 0;
  if ( v2 && (*((_DWORD *)this + 46) - v2) / 184 )
  {
    v4 = *((_DWORD *)this + 45);
    if ( v4 )
      v5 = (*((_DWORD *)this + 46) - v4) / 184;
    else
      v5 = 0;
    v6 = v5 - 1;
    v7 = 0;
    for ( *((_DWORD *)this + 48) = v6; (signed int)v7 <= *((_DWORD *)this + 48); v3 += 184 )
    {
      v8 = *((_DWORD *)this + 45);
      if ( !v8 || v7 >= (*((_DWORD *)this + 46) - v8) / 184 )
        _invalid_parameter_noinfo();
      *(float *)(*((_DWORD *)this + 45) + v3 + 64) = 0.0;
      ++v7;
    }
  }
  else
  {
    *((_DWORD *)this + 48) = 0;
  }
}
