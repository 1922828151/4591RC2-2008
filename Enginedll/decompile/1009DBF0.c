/*
 * func-name: ?SetDisableLODs@ModelFrame@@QAEX_N@Z
 * func-address: 0x1009dbf0
 * callers: 0x1009dbf0, 0x100ee360, 0x101658e0, 0x10167c60
 * callees: 0x1009dbf0
 */

void __thiscall ModelFrame::SetDisableLODs(ModelFrame *this, bool a2)
{
  ModelFrame *v3; // ecx

  do
  {
    v3 = (ModelFrame *)*((_DWORD *)this + 89);
    *((_BYTE *)this + 16) = a2;
    if ( v3 )
      ModelFrame::SetDisableLODs(v3, a2);
    this = (ModelFrame *)*((_DWORD *)this + 90);
  }
  while ( this );
}
