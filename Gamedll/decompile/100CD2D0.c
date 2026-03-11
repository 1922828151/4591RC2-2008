/*
 * func-name: ?SetTraceLineDefaults@RandomTextureTraceLine@@UAEXAAVTraceLine@@@Z_0
 * func-address: 0x100cd2d0
 * callers: 0x1001a4ec
 * callees: 0x10014dd0
 */

void __thiscall RandomTextureTraceLine::SetTraceLineDefaults(RandomTextureTraceLine *this, struct TraceLine *a2)
{
  unsigned int v3; // esi
  int v4; // eax
  unsigned int v5; // esi

  TraceLineSystem::SetTraceLineDefaults(this, a2);
  if ( *((_BYTE *)this + 400) )
  {
    v3 = std::vector<Material *>::size((char *)this + 368);
    *((_DWORD *)a2 + 23) = rand() % v3;
  }
  else
  {
    v4 = *((_DWORD *)this + 89);
    if ( v4 )
    {
      v5 = (*((_DWORD *)this + 90) - v4) >> 2;
      *((_DWORD *)a2 + 23) = rand() % v5;
    }
    else
    {
      *((_DWORD *)a2 + 23) = rand() % 0u;
    }
  }
}
