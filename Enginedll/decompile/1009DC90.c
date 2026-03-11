/*
 * func-name: ?Register@ModelFrame@@QAEXPAUID3DXAnimationController@@@Z
 * func-address: 0x1009dc90
 * callers: 0x1009dc90, 0x100f1b70
 * callees: 0x1009dc90, 0x100e2550
 */

void __thiscall ModelFrame::Register(ModelFrame *this, struct ID3DXAnimationController *a2)
{
  int v3; // ebp
  int v4; // eax
  const char *v5; // eax
  ModelFrame *v6; // ecx

  do
  {
    v3 = *(_DWORD *)a2;
    v4 = std::string::c_str((char *)this + 44);
    if ( (*(int (__stdcall **)(struct ID3DXAnimationController *, int, char *, _DWORD, _DWORD, _DWORD))(v3 + 28))(
           a2,
           v4,
           (char *)this + 100,
           0,
           0,
           0) < 0 )
    {
      v5 = (const char *)std::string::c_str((char *)this + 44);
      LogPrintf("RegisterAnimationOutput failed for %s", v5);
    }
    v6 = (ModelFrame *)*((_DWORD *)this + 89);
    if ( v6 )
      ModelFrame::Register(v6, a2);
    this = (ModelFrame *)*((_DWORD *)this + 90);
  }
  while ( this );
}
