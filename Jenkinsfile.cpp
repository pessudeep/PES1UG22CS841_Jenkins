pipeline {
    agent any

    stages {
        stage('Build') {
            steps {
                s 'g++ PES1UG22CS841-1.cpp -o temp'
                 build job: 'PES1UG22CS841-1', wait: false
                 echo 'Build by CS841 successful'
            }
        }

        stage('Test') {
            steps {
                sh 'cat PES1UG22CS841-1.cpp'
                echo 'Test by CS841 successful'
            }
        }

        stage('Deploy') {
            steps {
               
                 echo 'Deploy by CS841 successful'
            }
        }
    }

    post {
        failure {
            
                echo 'Pipeline Failed'
          
        }
    }
}
