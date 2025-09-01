class Solution {
    public List<String> fizzBuzz(int n) {
        ArrayList<String> stringList = new ArrayList<String>();
        for(int i=1;i<=n;i++){
            if(i%3==0 && i%5==0){
                stringList.add("FizzBuzz");
            }
            else if(i%3==0){
                stringList.add("Fizz");
            }
            else if(i%5==0){
                stringList.add("Buzz");
            }
            else{
                stringList.add(Integer.toString(i));
            }
        }
        return stringList;
    }
}