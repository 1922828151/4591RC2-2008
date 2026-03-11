/*
 * func-name: ?WriteParameter@XMLSystem@@QAEXPADW4Type@EditorVar@@PAEPAVDOMNode@xercesc_2_5@@@Z
 * func-address: 0x1004abc0
 * callers: 0x1003ea30, 0x100405a0, 0x10043b90, 0x100e2c10
 * callees: 0x10016e20, 0x1004a170, 0x1004a1f0, 0x1004a290, 0x1004a460, 0x1004a4a0, 0x1004a4f0, 0x1004a550
 */

int __thiscall XMLSystem::WriteParameter(XMLSystem *this, char *a2, int a3, float *a4, struct xercesc_2_5::DOMNode *a5)
{
  struct xercesc_2_5::DOMNode *Node; // edi
  int result; // eax
  int v8; // ecx
  const char *v9; // eax
  char v10; // [esp-18h] [ebp-6Ch] BYREF
  int v11; // [esp-14h] [ebp-68h]
  int v12; // [esp-10h] [ebp-64h]
  int v13; // [esp-Ch] [ebp-60h]
  int v14; // [esp-8h] [ebp-5Ch]
  int v15; // [esp-4h] [ebp-58h]
  int v16; // [esp+0h] [ebp-54h]
  struct xercesc_2_5::DOMNode *v17; // [esp+4h] [ebp-50h]
  char Buffer[64]; // [esp+14h] [ebp-40h] BYREF

  Node = XMLSystem::CreateNode(this, a5, "Param");
  XMLSystem::Attrib(this, "Name", a2, Node);
  v17 = 0;
  EditorVar::ToString((int)&v10, a3);
  result = XMLSystem::Attrib(this, "Type", v10, v11, v12, v13, v14, v15, v16, v17);
  switch ( a3 )
  {
    case 1:
      v9 = "true";
      if ( !*(_BYTE *)a4 )
        v9 = "false";
      sprintf(Buffer, "%s", v9);
      return XMLSystem::Attrib(this, "Value", Buffer, Node);
    case 2:
      sprintf(Buffer, "%d", *(_DWORD *)a4);
      return XMLSystem::Attrib(this, "Value", Buffer, Node);
    case 3:
      v17 = Node;
      v16 = v8;
      return XMLSystem::Attrib(this, "Value", *a4, Node);
    case 4:
      return XMLSystem::Attrib(this, "Value", (struct Vector2 *)a4, Node);
    case 5:
      return XMLSystem::Attrib(this, "Value", (struct Vector *)a4, Node);
    case 6:
      return XMLSystem::Attrib(this, "Value", (struct Vector4 *)a4, Node);
    case 11:
      v17 = Node;
      std::string::string(&v10, a4);
      return XMLSystem::Attrib(this, "Value", v10, v11, v12, v13, v14, v15, v16, v17);
    case 8:
      v17 = Node;
      std::string::string(&v10, a4);
      return XMLSystem::Attrib(this, "Value", v10, v11, v12, v13, v14, v15, v16, v17);
    case 12:
      return XMLSystem::Attrib(this, "Value", (struct Vector4 *)a4, Node);
    case 9:
      v17 = Node;
      std::string::string(&v10, a4 + 25);
      return XMLSystem::Attrib(this, "Value", v10, v11, v12, v13, v14, v15, v16, v17);
  }
  return result;
}
