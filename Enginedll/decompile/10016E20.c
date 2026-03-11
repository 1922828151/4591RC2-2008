/*
 * func-name: ?ToString@EditorVar@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Type@1@@Z
 * func-address: 0x10016e20
 * callers: 0x1004abc0
 * callees: none
 */

int __cdecl EditorVar::ToString(int a1, int a2)
{
  if ( a2 == 1 )
  {
    std::string::string(a1, "Bool");
    return a1;
  }
  else if ( a2 == 2 )
  {
    std::string::string(a1, "Int");
    return a1;
  }
  else if ( a2 == 3 )
  {
    std::string::string(a1, "Float");
    return a1;
  }
  else if ( a2 == 4 )
  {
    std::string::string(a1, "Float2");
    return a1;
  }
  else if ( a2 == 5 )
  {
    std::string::string(a1, "Float3");
    return a1;
  }
  else if ( a2 == 6 )
  {
    std::string::string(a1, "Float4");
    return a1;
  }
  else if ( a2 == 8 )
  {
    std::string::string(a1, "Filename");
    return a1;
  }
  else if ( a2 == 9 )
  {
    std::string::string(a1, "Texture");
    return a1;
  }
  else if ( a2 == 11 )
  {
    std::string::string(a1, "String");
    return a1;
  }
  else if ( a2 == 12 )
  {
    std::string::string(a1, "Color");
    return a1;
  }
  else
  {
    if ( a2 == 13 )
      std::string::string(a1, "StringArray");
    else
      std::string::string(a1, "Unknown");
    return a1;
  }
}
