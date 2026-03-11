/*
 * func-name: ?Scale@StaticModel@@QAEXVVector@@@Z
 * func-address: 0x100ee2c0
 * callers: none
 * callees: 0x1009e6e0
 */

void __thiscall StaticModel::Scale(_DWORD *this, char a2, int a3, int a4)
{
  ModelFrame *v4; // ecx

  v4 = (ModelFrame *)this[77];
  if ( v4 )
    ModelFrame::Scale(v4, (struct Vector *)&a2);
}
