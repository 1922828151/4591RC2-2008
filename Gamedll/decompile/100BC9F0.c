/*
 * func-name: ?Tick@SurfaceDecal@@UAEXXZ_0
 * func-address: 0x100bc9f0
 * callers: 0x100140ba
 * callees: none
 */

void __thiscall SurfaceDecal::Tick(SurfaceDecal *this)
{
  if ( -1.0 != *((float *)this + 27) && *((float *)this + 49) > (double)*((float *)this + 27) )
    *((float *)this + 51) = *((float *)this + 27) / *((float *)this + 49);
  FXSystem::Tick(this);
}
