/*
 * func-name: ?CountFrames@ModelFrame@@QAEHXZ
 * func-address: 0x1009dc50
 * callers: 0x1009dc50, 0x100f1b70
 * callees: 0x1009dc50
 */

int __thiscall ModelFrame::CountFrames(ModelFrame *this)
{
  ModelFrame *v2; // ecx
  int v3; // esi
  ModelFrame *v4; // ecx

  v2 = (ModelFrame *)*((_DWORD *)this + 89);
  v3 = 1;
  if ( v2 )
    v3 = ModelFrame::CountFrames(v2) + 1;
  v4 = (ModelFrame *)*((_DWORD *)this + 90);
  if ( v4 )
    v3 += ModelFrame::CountFrames(v4);
  return v3;
}
