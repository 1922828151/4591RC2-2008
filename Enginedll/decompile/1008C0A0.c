/*
 * func-name: ?PushRedo@Editor@@QAEXAAUUndo@1@@Z
 * func-address: 0x1008c0a0
 * callers: none
 * callees: 0x1000c2b0, 0x10012cd0
 */

void __thiscall Editor::PushRedo(Editor *this, struct Editor::Undo *a2)
{
  _DWORD *v2; // esi
  int v3; // edi
  _DWORD *v4; // ebx

  v2 = (_DWORD *)((char *)this + 2156);
  *((_BYTE *)a2 + 4) = 0;
  v3 = *((_DWORD *)this + 540);
  v4 = sub_10012CD0(v3, *(CREControl **)(v3 + 4), (int)a2);
  sub_1000C2B0(v2, 1u);
  *(_DWORD *)(v3 + 4) = v4;
  *(_DWORD *)v4[1] = v4;
}
