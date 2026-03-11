/*
 * func-name: ?GetCamera@CameraHandler@@QAEPAVCamera@@_N@Z_0
 * func-address: 0x100dcb70
 * callers: 0x10003f58
 * callees: none
 */

struct Camera *__thiscall CameraHandler::GetCamera(CameraHandler *this, bool a2)
{
  Editor *v3; // eax
  int v5; // [esp+0h] [ebp-8h]
  int v6; // [esp+0h] [ebp-8h]
  int v7; // [esp+4h] [ebp-4h]
  int v8; // [esp+4h] [ebp-4h]

  v3 = (Editor *)Editor::Instance(v5, v7);
  if ( !Editor::GetEditorMode(v3) || a2 )
    return this;
  else
    return (struct Camera *)(Editor::Instance(v6, v8) + 252);
}
