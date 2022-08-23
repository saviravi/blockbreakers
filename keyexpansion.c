unsigned char* KeyExpansion(unsigned char* key){
	unsigned char* expanded_keys = calloc(11, sizeof(char*));
	expanded_key[0] = key;
	for(int i = 1; i < 11; i++){
		unsigned char* new_key = rotWord(expanded_key[i - 1]);
		new_key = subWord(new_key);
		new_key = new_key ^ previous_key;
		new_key = new_key ^ rcon(i);
		i[expanded_keys] = new_key;
	}
	return expanded_keys
}

