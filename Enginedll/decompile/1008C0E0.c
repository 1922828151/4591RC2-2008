/*
 * func-name: ?HideActors@Editor@@QAEXV?$vector@PAVActor@@V?$allocator@PAVActor@@@std@@@std@@@Z
 * func-address: 0x1008c0e0
 * callers: none
 * callees: 0x1000d4b0, 0x1000f2e0, 0x10083100, 0x1008bd00, 0x10091b60, 0x101a2500
 */

void __thiscall Editor::HideActors(Editor *this, char a2, void *a3, int a4, int a5)
{
  _DWORD *v6; // eax
  struct Editor::Undo *v7; // eax
  _DWORD v8[4]; // [esp-1Ch] [ebp-ACh] BYREF
  int v9; // [esp-Ch] [ebp-9Ch]
  int v10; // [esp-8h] [ebp-98h]
  int v11; // [esp-4h] [ebp-94h]
  _DWORD *v12; // [esp+4h] [ebp-8Ch]
  int v13; // [esp+8h] [ebp-88h] BYREF
  void *v14; // [esp+Ch] [ebp-84h]
  _BYTE v15[108]; // [esp+18h] [ebp-78h] BYREF
  int v16; // [esp+8Ch] [ebp-4h]

  v11 = 3;
  v10 = 1;
  v9 = 1;
  v12 = v8;
  v16 = 0;
  std::vector<Actor *>::vector<Actor *>(v8, (int)&a2);
  v6 = Editor::HideFreezeHelper(this, &v13, v8[0], (struct Actor **)v8[1], v8[2], v8[3], v9, v10);
  LOBYTE(v16) = 1;
  v7 = (struct Editor::Undo *)sub_10091B60(v6, v11);
  LOBYTE(v16) = 2;
  Editor::PushUndo(this, v7);
  sub_1000F2E0((int)v15);
  if ( v14 )
    operator delete(v14);
  if ( a3 )
    operator delete(a3);
}
