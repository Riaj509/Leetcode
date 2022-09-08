 class RangeFreqQuery {
  		public:
  			unordered_map<int,vector<int>> m;
  			RangeFreqQuery(vector<int>& arr) {
  				for(int i=0; i<arr.size(); i++){
  					m[arr[i]].push_back(i);
  				}
  			}

  			int query(int left, int right, int value) {
  				int a  = lower_bound( m[value].begin(),  m[value].end(),left) - m[value].begin() + 1;
  				int b  = upper_bound( m[value].begin(),  m[value].end(), right) - m[value].begin() + 1;
  				return b-a;

  			}
  		};