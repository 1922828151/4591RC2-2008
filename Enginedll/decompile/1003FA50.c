/*
 * func-name: sub_1003FA50
 * func-address: 0x1003fa50
 * callers: 0x10044770
 * callees: 0x1004a170, 0x1004a1f0, 0x1004a290
 */

unsigned int __thiscall sub_1003FA50(int this, struct xercesc_2_5::DOMNode *a2, const char *StringUuid)
{
  XMLSystem *v3; // ebx
  struct xercesc_2_5::DOMElement *Node; // eax
  const char *v5; // esi
  struct xercesc_2_5::DOMNode *v6; // edi
  unsigned int result; // eax
  unsigned int i; // edi
  int v9; // ecx
  int v10; // ecx
  char v11; // [esp-20h] [ebp-30h] BYREF
  int v12; // [esp-1Ch] [ebp-2Ch]
  int v13; // [esp-18h] [ebp-28h]
  int v14; // [esp-14h] [ebp-24h]
  int v15; // [esp-10h] [ebp-20h]
  int v16; // [esp-Ch] [ebp-1Ch]
  int v17; // [esp-8h] [ebp-18h]
  struct xercesc_2_5::DOMNode *v18; // [esp-4h] [ebp-14h]
  struct xercesc_2_5::DOMNode *v19; // [esp+14h] [ebp+4h]

  v3 = (XMLSystem *)(this + 96);
  Node = XMLSystem::CreateNode((XMLSystem *)(this + 96), a2, "SelectionList");
  v5 = StringUuid;
  v18 = 0;
  v6 = Node;
  std::string::string(&v11, StringUuid);
  XMLSystem::Attrib(v3, "Name", v11, v12, v13, v14, v15, v16, v17, v18);
  result = *((_DWORD *)v5 + 8);
  if ( result && (int)(*((_DWORD *)v5 + 9) - result) >> 2 )
  {
    result = (unsigned int)XMLSystem::CreateNode(v3, v6, "Items");
    v19 = (struct xercesc_2_5::DOMNode *)result;
    for ( i = 0; ; ++i )
    {
      v9 = *((_DWORD *)v5 + 8);
      if ( !v9 )
        break;
      result = (*((_DWORD *)v5 + 9) - v9) >> 2;
      if ( i >= result )
        break;
      XMLSystem::CreateNode(v3, v19, "Item");
      v10 = *((_DWORD *)v5 + 8);
      if ( !v10 || i >= (*((_DWORD *)v5 + 9) - v10) >> 2 )
        invalid_parameter_noinfo();
      UuidToStringA((const UUID *)(*(_DWORD *)(*((_DWORD *)v5 + 8) + 4 * i) + 256), (RPC_CSTR *)&StringUuid);
      result = XMLSystem::Attrib(v3, "ActorGUID", StringUuid, 0);
    }
  }
  return result;
}
