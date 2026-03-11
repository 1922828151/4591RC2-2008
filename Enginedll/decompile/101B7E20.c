/*
 * func-name: sub_101B7E20
 * func-address: 0x101b7e20
 * callers: none
 * callees: 0x1008f370, 0x101a2534
 */

Editor *sub_101B7E20()
{
  Editor *v0; // eax
  Editor *result; // eax

  v0 = (Editor *)operator new(0x8F0u);
  if ( v0 )
  {
    result = Editor::Editor(v0);
    Editor::inst = result;
  }
  else
  {
    result = 0;
    Editor::inst = 0;
  }
  return result;
}
