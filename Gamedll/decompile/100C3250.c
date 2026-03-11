/*
 * func-name: ?setProject@SurfaceDecal@@QAEX_N@Z_0
 * func-address: 0x100c3250
 * callers: 0x10007e82
 * callees: 0x1000f9ca
 */

void __thiscall SurfaceDecal::setProject(SurfaceDecal *this, bool a2)
{
  *((_BYTE *)this + 265) = a2;
  if ( a2 )
    SurfaceDecal::UpdateProjectionPolys(this);
}
